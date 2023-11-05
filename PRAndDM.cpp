#include <iostream>

using namespace std;

int main()
{
	bool* pBool = new bool{ true };
	delete pBool;
	pBool = nullptr;

	float* pFloat = new float{ 20.5 };
	// delete
	pFloat = new float{ 30.5 };
	delete pFloat;
	pFloat = nullptr;

	int* pInt = nullptr;
	for (int i = 0; i < 5000; i++)
	{
		pInt = new int{ rand() };
		cout << *pInt << endl;
	}
	delete pInt;
	pInt = nullptr;
}