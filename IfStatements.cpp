// IfStatements.cpp and ElseIfStatements
#include <iostream>

using namespace std;

int main()
{
	int grade;
	cout << "Enter a numerical grade: ";
	cin >> grade;

	if (grade > 90)
	{
		cout << "A+" << endl;
	}
	else if (grade > 80)
	{
		cout << "A" << endl;
	}
	else if (grade >70)
	{
		cout << "B" << endl;
	}
	else if (grade > 60)
	{
		cout << "C" << endl;
	}
	else if (grade > 50)
	{
		cout << "D" << endl;
	}
	else
	{
		cout << "F" << endl;
	}
}
