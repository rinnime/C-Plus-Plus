// Week3.cpp : Write a program to check and return whether it is currently a leap year. HINT - https://www.mathsisfun.com/leap-years.html

#include <iostream>

using namespace std;

bool isLeapYear(int year) 
{
    return ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0));
}

int main()
{
    // Welcome the user and have them enter their name
    cout << "What is your name: ";
    string name;
    cin >> name;

    cout << "Welcome " << name << "!" << endl;
    cout << "Give me a year and I will tell you if it is a leap year or not." << endl;
    
    int year;
    
    //while is the loop and the true is an infinite loop unless the break is entered.
    while (true)
    {
        //have the user enter a year
        cout << "Enter a year: ";
        cin >> year;
        //if the year is greater than or equal to 1582, check to see if it is a leap year or not, if not continue the loop, if yes end the loop
        if (year >= 1582)
        {
            if (isLeapYear(year))
            {
                cout << year << " is a leap year." << endl;
                break;  // Exit the loop since the user entered a leap year
            }
            else
            {
                cout << year << " is not a leap year.";
            }
        }
    }
}

