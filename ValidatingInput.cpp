// ValidatingInput.cpp

#include <iostream>

using namespace std;

int main()
{
    int number;

    bool validInput = false;

    do
    {
        //Enter a number
        cout << "Enter a number: ";
        cin >> number;
        //If not a number display it's not a number and ask the user to enter a number again.
        if (cin.fail())
        {
            validInput = false;
            cin.clear();
            cin.ignore(99, '\n');
            cout << "That is not a number!" << endl;
        }
        else
        {
            break;
        }
    } while (true);
}
