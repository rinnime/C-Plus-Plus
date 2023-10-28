// ForLoop.cpp

#include <iostream>

using namespace std;

int main()
{
    cout << "Enter a number: ";
    int number;
    cin >> number;

    for (int i = 0; i <= number; i++)
        // change int i = 0 to int i = 1 to display negative numbers
    {
        if (i % 2 == 0)
        {
            cout << i << " ";
        }
    }
    cout << endl;

    for (int i = number; i >= 0; i--)
    {
        cout << i << " ";
    }
    cout << endl;
}

