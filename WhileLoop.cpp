// WhileLoop.cpp

#include <iostream>
using namespace std;
int main()
{
    cout << "Enter an integer between 10 and 20: ";
    int number;
    cin >> number;

    bool isValid = (number >= 10) && (number <= 20);
    while (!isValid)
    {
        cout << "That number is not between 10 and 20." << endl;
        cout << "Enter an integer between 10 and 20: ";
        cin >> number;
        isValid = (number >= 10) && (number <= 20);
    }
    cout << "Thanks for entering " << number << ", that number is between 10 and 20!" << endl;
