// FunctionOverloading.cpp
//Program contains comments and other code with Part 1, Part 2 and Part 3 different kinds of function overloading.

#include <iostream>

using namespace std;

//declare functon
//int Add(int a, int b);
//float Add(float a, float b);
//double Add(double a, double b);

//template <typename T>
//T Add(T a, T b);

void DisplayMessage(string message);
//void DisplayMessage(string message, int number);
//void DisplayMessage(string message, float number);
//void DisplayMessage(string message, double number);

//will allow to pass any perameters
template <typename T>
T Add(T v);
template <typename T, typename... Args>
T Add(T first, Args...args);

template <typename T>
void DisplayMessage(string message, T number);

int main()
{
    //call function
    int i = Add(1, 2, 3);
    float f = Add(3.3f, 6.6f, 4.32f, 55.4f);
    double d = Add(4.4, 2.4);

    DisplayMessage("Test Overloaded Functions");
    DisplayMessage("Integer Addition = ", i);
    DisplayMessage("Float Addition = ", f);
    DisplayMessage("Double Addition = ", d);
}

//define function
//int Add(int a, int b)
//{
//    return a + b;
//}

//float Add(float a, float b)
//{
//    return a + b;
//{

//double Add(double a, double b)
//{
//    return a + b;
//}

//template <typename T>
//T Add(T a, T b)
//{
//    return a + b;
//}

void DisplayMessage(string message)
{
    cout << message << endl;
}

//void DisplayMessage(string message, int number)
//{
//    cout << message << number << endl;
//}

//void DisplayMessage(string message, float number)
//{
//    cout << message << number << endl;
//}

//void DisplayMessage(string message, double number)
//{
//    cout << message << number << endl;
//}

template <typename T>
void DisplayMessage(string message, T number)
{
    cout << message << number << endl;
}

template <typename T>
T Add(T v)
{
    return v;
}

template <typename T, typename... Args>
T Add(T first, Args...rest)
{
    return first + Add(rest...);
}