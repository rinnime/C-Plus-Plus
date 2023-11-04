#include <iostream>

using namespace std;

void Swap(int* pNumber1, int* pNumber2);
void Swap(int& number1, int& number2);

int main()
{
	int a = 10;
	int b = 20;

	Swap(a, b); //Swap(&a, &b); for pointers
	cout << "a: " << a << endl;
	cout << "b: " << b << endl;

}

void Swap(int* pNumber1, int* pNumber2)
{
	int temp = *pNumber1;
	*pNumber1 = *pNumber2;
	*pNumber2 = temp;
}

void Swap(int& number1, int& number2)
{
	int temp = number1;
	number1 = number2;
	number2 = temp;
}