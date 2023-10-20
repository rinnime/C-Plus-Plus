// Week2.cpp : Write a program to find the “Sum” and “Average” of “three” numbers. 
// Provide a hint to the user, take the input and return some output results to show 
// the user the calculations for their three numbers.

#include <iostream>

using namespace std;

int main()
{
    // Write a program to find the “Sum” and “Average” of “three” numbers
    int a = 3;
    int b = 5;
    int c = 7;

    int add = a + b + c;

    cout << "The sum of " << a << ", " << b << ",and " << c << " is " << add << "." << endl;

    // Provide a hint to the user, take the input and return some output results to show 
    // the user the calculations for their three numbers.
    // Have user input three numbers
    double num1, num2, num3;

    cout << "Input three numbers and I will tell you the sum." << endl;
    //Numbers input can be positive, negative or decimals
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    cout << "Enter the third number: ";
    cin >> num3;

    // Calculations of user's three numbers
    double sum = num1 + num2 + num3;

    cout << "The sum of " << num1 << ", " << num2 << ", and " << num3 << " is: " << sum << endl;

    //Find the average of the three numbers (sum/3)
    double average = sum / 3;
    cout << "The average of " << sum << " is " << average << endl;
}