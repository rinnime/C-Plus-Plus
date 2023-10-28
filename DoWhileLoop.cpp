// DoWhileLoop.cpp
#include <iostream>

using namespace std;

int main()
{
    bool isValid = false;
    int number;
    do
    {
        cout << "Enter an integer between 10 and 20: ";
        cin >> number;
        isValid = (number >= 10) && (number <= 20);
        if (!isValid) 
        {
            cout << "That number is not between 10 and 20." << endl;
        }
    } while (!isValid);
    cout << "Thanks for entering " << number << ", tha tnumber is between 10 and 20." << endl;
}

