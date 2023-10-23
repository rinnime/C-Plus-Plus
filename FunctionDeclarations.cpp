// FunctionDeclarations.cpp 
#include <iostream>
using namespace std;

//function declaration
void PrintMessage(string message);
int Add(int number1, int number2);
float Max(float n1, float n2, float n3);
bool IsEven(int number);
bool IsOdd(int number);

int main()
{
    //call the function
    PrintMessage("Testing Add");
    int r = Add(1, 2);
    //can also enter the function like this
    //cout << "1 + 2 = " << Add(1,2) << endl;
    cout << "1 + 2 = " << r << endl;

    //Test function
    PrintMessage("Testing Max");
    float max = Max(20.5f, 50.5f, 30.5f);
    cout << "20.5f, 50.5f, 30.5f Max is " << max << endl;

    PrintMessage("Testing Even/Odd");
    int number = 10;
    bool isEven = IsEven(number);
    bool isOdd = IsOdd(number);
    if (isEven)
    {
        cout << number << " is even!" << endl;
    }  
    if (isOdd)
    {
        cout << number << " is odd!" << endl;
    }
}

//function definition
void PrintMessage(string message) 
{
    cout << message << endl;
}

int Add(int number1, int number2)
{
    return number1 + number2;
}

float Max(float n1, float n2, float n3)
{
    float max = n1;
    if (n2 > max)
    {
        max = n2;
    }
    if (n3 > max)
    {
        max = n3;
    }
    return max;
}

bool IsEven(int number)
{
    if (number % 2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool IsOdd(int number)
{
    return !IsEven(number);
}