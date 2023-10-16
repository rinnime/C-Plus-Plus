// ScopeAndNestedStatements.cpp
#include <iostream>

using namespace std;

int main()
{
    cout << "Please enter a positive number: ";
    float firstNumber;
    cin >> firstNumber;

    if (firstNumber > 0)
    {
        cout << "Please enter a non-zero number: ";
        float secondNumber;
        cin >> secondNumber;

        if (secondNumber != 0)
        {
            cout << firstNumber << "/" << secondNumber << " = " << firstNumber / secondNumber << endl;
        }
        else
        {
            cout << secondNumber << " is zero. Goodbye!" << endl;
        }
    }
    else 
    {
        cout << firstNumber << " is not positive. Goodbye!" << endl;
    }

}
