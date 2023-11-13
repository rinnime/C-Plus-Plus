// C++ program to illustrate call by value
#include <iostream>
using namespace std;

// Function Prototype
void swapx(int x, int y);

// Main function
int main()
{
    int a = 10, b = 20;

    // Pass by Values
    swapx(a, b); // Actual Parameters

    cout << "In the Caller:\n";
    cout << "a = " << a << " b = " << b << endl;

    return 0;
}

// Swap functions that swaps
// two values
void swapx(int x, int y) // Formal Parameters
{
    int t;

    t = x;
    x = y;
    y = t;

    cout << "Inside Function:\n";
    cout << "x = " << x << " y = " << y << endl;
}