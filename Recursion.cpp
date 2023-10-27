// Recursion.cpp 
#include <iostream>
using namespace std;
//declare function
int Power(int base, int exponent);

int main()
{
	//call function
	cout << Power(3, 0) << endl;
	cout << Power(3, 1) << endl;
	cout << Power(3, 2) << endl;
	cout << Power(3, 3) << endl;
	cout << Power(3, 4) << endl;
	cout << Power(3, 5) << endl;
	cout << Power(3, 6) << endl;
	cout << Power(3, 7) << endl;
}

//define function
int Power(int base, int exponent)
{
	if (exponent == 0)
	{
		return 1;
	}
	else
	{
		return base* Power(base, exponent - 1);
	}
}

