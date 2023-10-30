// MultidimensionalArraysPart2.cpp 

#include <iostream>

using namespace std;

void DisplayMap(char map[], int width, int height);
int GetIndexFromXY(int x, int y, int width);

int main()
{
    constexpr int kHeight = 5;
    constexpr int kWidth = 6;

    char myMap[] =

    { '+', '-', '-', '-', '-', '+',
     '|', '@', ' ', ' ', ' ', '|',
     '|', ' ', ' ', ' ', ' ', '|',
     '|', ' ', ' ', ' ', '$', '|',
     '+', '-', '-', '-', '-', '+' };

    DisplayMap(myMap, kWidth, kHeight);
}

void DisplayMap(char map[], int width, int height) 
{
    for (int y = 0; y < height; y++)
    {
        for (int x = 0; x < width; x++)
        {
            int index = GetIndexFromXY(x, y, width);
            cout << map[index];
        }
        cout << endl;
    }
}

int GetIndexFromXY(int x, int y, int width)
{
    return x + y * width;
}