#include <iostream>

using namespace std;

int main()
{
	int variable = 10;
	int* pointer = &variable; //pointers only use address, always use & before the variable

	//use * to dereference the pointer when declaring a new variable
	int newVariable = *pointer; //10
	*pointer = 20; // variable == 20

	cout << "variable: " << variable << endl; // print 20
	cout << "&variable: " << &variable << endl; // print where the variable is stored
	cout << "pointer: " << pointer << endl; // print address of the variable
	cout << "&pointer: " << &pointer << endl;

	cout << "*pointer: " << *pointer << endl;

}