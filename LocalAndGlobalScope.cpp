// PassingByReference-Swap.cpp 
#include <iostream>

using namespace std;

bool g_isEven = false;
bool g_isOdd = false;
bool g_isZero = false;
bool g_isPositive = false;
bool g_isNegative = false;

//declare function
void AnalyzeNumber(int number);

int main()
{
    //call function
    int number = -21;

    AnalyzeNumber(number);

    cout << "Analyzing Number: " << number << endl;
    if (g_isEven)
    {
        cout << "The number is even! " << endl;
    }
    if (g_isOdd)
    {
        cout << "The number is odd! " << endl;
    }
    if (g_isZero)
    {
        cout << "The number is zero! " << endl;
    }
    if (g_isPositive)
    {
        cout << "The number is positive! " << endl;
    }
    if (g_isNegative)
    {
        cout << "The number is negative! " << endl;
    }
}

//define function
void AnalyzeNumber(int number)
{
    if (number % 2 == 0)
    {
        g_isEven = true;
        g_isOdd = false;
    }
    else
    {
        g_isOdd = true;
        g_isEven = false;
    }

    if (number > 0)
    {
        g_isPositive = true;
        g_isNegative = false;
        g_isZero = false;
    }
    else if (number < 0)
    {
        g_isNegative = true;
        g_isPositive = false;
        g_isZero = false;
    }
    else
    {
        g_isZero = true;
        g_isPositive = false;
        g_isNegative = false;
    }
}