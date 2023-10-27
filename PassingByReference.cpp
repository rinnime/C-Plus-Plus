// PassingByReference-Swap.cpp 
#include <iostream>

using namespace std;

//declare function
void AnalyzeNumber(int number, bool& isEven, bool& isOdd, bool& isZero, bool& isPositive, bool& isNegative);

int main()
{
    //call function
    int number = -21;
    bool isEven = false;
    bool isOdd = false;
    bool isZero = false;
    bool isPositive = false;
    bool isNegative = false;

    AnalyzeNumber(number, isEven, isOdd, isZero, isPositive, isNegative);

    cout << "Analyzing Number: " << number << endl;
    if (isEven)
    {
        cout << "The number is even! " << endl;
    }
    if (isOdd)
    {
        cout << "The number is odd! " << endl;
    }
    if (isZero)
    {
        cout << "The number is zero! " << endl;
    }
    if (isPositive)
    {
        cout << "The number is positive! " << endl;
    }
    if (isNegative)
    {
        cout << "The number is negative! " << endl;
    }
}

//define function
void AnalyzeNumber(int number, bool& isEven, bool& isOdd, bool& isZero, bool& isPositive, bool& isNegative) 
{
    if (number % 2 == 0)
    {
        isEven = true;
        isOdd = false;
    }
    else
    {
        isOdd = true;
        isEven = false;
    }

    if (number > 0)
    {
        isPositive = true;
        isNegative = false;
        isZero = false;
    }
    else if (number < 0)
    {
        isNegative = true;
        isPositive = false;
        isZero = false;
    }
    else
    {
        isZero = true;
        isPositive = false;
        isNegative = false;
    }
}