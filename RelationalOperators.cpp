// Branching - Relational Operators

#include <iostream>

using namespace std;

int main()
{
    
    int a = 10;
    int b = 20;

    bool result;

    result = (a == b); // false
    result = (a != b); // true
    
    result = (a < 10); // false
    result = (a <= 10); // true

    result = (10 > b); // false
    result = (10 >= b); // false

    bool isEven = ((a % 2) == 0); // true
    bool isOdd = ((a % 2) != 0); // false
    //  bool isOdd = ((a % 2) == 1); // false //Can call isOdd only once. System error if called twice.
    bool isPositive = (b > 0); // true
}
