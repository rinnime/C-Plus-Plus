// C program to illustrate Call by Reference
#include <iostream>
using namespace std;

// Function Prototype
void swapx(int&, int&);

// Main function
int main()
{
    int a = 10, b = 20;

    // Pass reference
    swapx(a, b); // Actual Parameters

    cout << "In the Caller:\n";
    cout << "a = " << a << " b = " << b << endl;

    return 0;
}

// Function to swap two variables
// by references
void swapx(int& x, int& y) // Formal Parameters
{
    int t;

    t = x;
    x = y;
    y = t;

    cout << "Inside the Function:\n";
    cout << "x = " << x << " y = " << y << endl;
}