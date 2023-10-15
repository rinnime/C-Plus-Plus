// Variables.cpp

#include <iostream>
#include  <string>

using namespace std;

int main()
{
	// dataType variableName;
	int age;
	float weight;
	double distance;
	bool isAlive;
	char initial;
	string name; //the string lives inside the namespace of std.

	unsigned short int betterAge;
	long double hugeDistance;

	age = 21;
	weight = 170.5f; //add f to know the difference between float and double.
	distance = 1212.987;
	isAlive = true;
	initial = 'C';
	name = "Your Name";

	cout << "My name is " << name << " and I am " << age << " years old." << endl;
	cout << "Am I alive: " << isAlive << endl;

	int newAge;
	newAge = age; // is also equal to 26

	int newestAge = 27;
}

