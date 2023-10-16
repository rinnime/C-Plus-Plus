// LogicalOperators.cpp
#include <iostream>

using namespace std;

int main()
{
    cout << "Please enter an integer: ";
    int number;
    cin >> number;

    bool isPositive = (number > 0);
    bool isNegative = (number < 0);
    bool isZero = !isNegative && !isPositive;
    //bool isZero = (isNegative == false) && (isPositive == false);
    //bool isZero = number == 0;
    //bool isNonZero = !isZero;

    bool isEven = (number % 2) == 0;
    bool isOdd = !isEven;

    if (isPositive) //or can enter like,  if(isPositive && isEven)
    {
        if (isEven)
        {
            cout << number << " is positive and even." << endl;
        }
    }
    if (isNegative)//or can enter like,  if(isNegative && isOdd)
    {
        if (isOdd)
        {
            cout << number << " is negative and odd." << endl;
        }
    }

}
