#include <iostream>
#include <cstdlib>
#include <ctime>
#include <conio.h> // For _kbhit() and _getch() functions
#include <thread>  // For std::this_thread::sleep_for
#include <chrono>  // For std::chrono::milliseconds

using namespace std;

// Constants
const int SCREEN_WIDTH = 80;
const int SCREEN_HEIGHT = 24;
const int HORSE_SPEED = 2;
const int ENEMY_SPEED = 2;
const int ATTACK_DISTANCE = 10;
const int LASER_RANGE = 10;
const int PLAYER_HEALTH = 200;
const int ENEMY_HEALTH = 100;
const int ENEMY_DAMAGE = 10;

// Game state
int gameState = 0;
bool quit = false;
int horseX = SCREEN_WIDTH / 2;
int horseY = SCREEN_HEIGHT - 2;
int objectX = 10;
int playerHealth = PLAYER_HEALTH;
int enemyX = SCREEN_WIDTH - 10;
const int ENEMY_Y_OFFSET = SCREEN_HEIGHT - 3;
int enemyY = ENEMY_Y_OFFSET;
int enemyHealth = ENEMY_HEALTH;
int highScore = 0; // Added high score variable

int getRandomNumber(int min, int max) {
    return min + rand() % (max - min + 1);
}

void clearScreen() {
    system("cls");
}

void drawEntities() {
    clearScreen();

    for (int i = 0; i < horseX; i++) {
        cout << ' ';
    }
    cout << "H" << endl;

    for (int i = 0; i < objectX; i++) {
        cout << ' ';
    }
    cout << "O" << endl;

    for (int i = 0; i < enemyX; i++) {
        cout << ' ';
    }
    cout << "E" << endl;

    cout << "Player Health: " << playerHealth << " | Enemy Health: " << enemyHealth << endl;
}

void initializeGame() {
    horseX = SCREEN_WIDTH / 2;
    horseY = SCREEN_HEIGHT - 2;
    objectX = 10;
    playerHealth = PLAYER_HEALTH;
    enemyX = SCREEN_WIDTH - 10;
    enemyY = ENEMY_Y_OFFSET;
    enemyHealth = ENEMY_HEALTH;
}

void displayStartScreen() {
    clearScreen();
    cout << "=== Robot Horse Game ===" << endl;
    cout << "1. Start Game" << endl;
    cout << "2. High Scores" << endl;
    cout << "3. Exit" << endl;
}

void displayHighScoresScreen() {
    clearScreen();
    cout << "=== High Scores ===" << endl;
    cout << "High Score: " << highScore << endl; // Display high score
    cout << "1. Back to Main Menu" << endl;
}

void handleInput() {
    if (_kbhit()) {
        char key = _getch();
        if (key == 'a' && horseX > 0) {
            horseX -= HORSE_SPEED;
        }
        else if (key == 'd' && horseX < SCREEN_WIDTH - 1) {
            horseX += HORSE_SPEED;
        }
        else if (key == 'w' && horseY > 0) {
            horseY -= 1;
        }
        else if (key == 's' && horseY < SCREEN_HEIGHT - 2) {
            horseY += 1;
        }
        else if (key == ' ') {
            int laserX = horseX + 1;
            while (laserX < SCREEN_WIDTH) {
                if (laserX >= enemyX) {
                    enemyHealth -= getRandomNumber(10, 20);
                    if (enemyHealth <= 0) {
                        enemyHealth = 0;
                        gameState = 0;
                        cout << "Enemy destroyed! You win!" << endl;

                        // Update high score if necessary
                        if (playerHealth > highScore) {
                            highScore = playerHealth;
                        }
                    }
                    break;
                }
                laserX++;
            }
        }
    }
}

void updateEnemy() {
    bool withinRange = abs(enemyX - horseX) <= ATTACK_DISTANCE && abs(enemyY - horseY) <= ATTACK_DISTANCE;

    if (withinRange) {
        int slowEnemySpeed = ENEMY_SPEED / 2;

        if (enemyX < horseX) {
            enemyX += slowEnemySpeed;
        }
        else if (enemyX > horseX) {
            enemyX -= slowEnemySpeed;
        }

        if (enemyY < horseY) {
            enemyY += slowEnemySpeed;
        }
        else if (enemyY > horseY) {
            enemyY -= slowEnemySpeed;
        }

        if (enemyX == horseX && enemyY == horseY) {
            playerHealth -= ENEMY_DAMAGE;
            if (playerHealth <= 0) {
                playerHealth = 0;
                gameState = 0;
                cout << "Game Over! You lost all your health." << endl;

                // Update high score if necessary
                if (playerHealth > highScore) {
                    highScore = playerHealth;
                }
            }
        }
    }
    else {
        int moveDirection = getRandomNumber(0, 3);

        switch (moveDirection) {
        case 0:
            if (enemyX > 0) {
                enemyX--;
            }
            break;
        case 1:
            if (enemyX < SCREEN_WIDTH - 1) {
                enemyX++;
            }
            break;
        case 2:
            if (enemyY > 0) {
                enemyY--;
            }
            break;
        case 3:
            if (enemyY < SCREEN_HEIGHT - 2) {
                enemyY++;
            }
            break;
        }
    }
}

int main() {
    srand(static_cast<unsigned int>(time(nullptr)));

    while (!quit) {
        auto startTime = chrono::high_resolution_clock::now(); // Start timing

        switch (gameState) {
        case 0: // Start screen
            displayStartScreen();
            char choice;
            cin >> choice;
            switch (choice) {
            case '1':
                gameState = 1; // Start game
                initializeGame();
                break;
            case '2':
                gameState = 2; // High scores
                break;
            case '3':
                quit = true;
                break;
            default:
                break;
            }
            break;

        case 1: // Game screen
            handleInput();
            updateEnemy();

            if (enemyHealth <= 0) {
                enemyHealth = 0;
                gameState = 0;
                cout << "Enemy destroyed! You win!" << endl;

                // Update high score if necessary
                if (playerHealth > highScore) {
                    highScore = playerHealth;
                }
            }

            drawEntities();
            break;

        case 2: // High scores screen
            displayHighScoresScreen();
            char backChoice;
            cin >> backChoice;
            if (backChoice == '1') {
                gameState = 0;
            }
            break;

        case 3: // Exit
            quit = true;
            break;
        }

        auto endTime = chrono::high_resolution_clock::now(); // End timing
        auto elapsedTime = chrono::duration_cast<chrono::milliseconds>(endTime - startTime);

        int gameSpeed = 100;
        if (elapsedTime.count() < gameSpeed) {
            this_thread::sleep_for(chrono::milliseconds(gameSpeed - elapsedTime.count()));
        }
    }

    return 0;
}
