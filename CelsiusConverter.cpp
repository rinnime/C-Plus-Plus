// CelsiusConverter.cpp

#include <iostream>

using namespace std;

int main()
{
    // Prompt the user to enter the temperature in Celsius
    cout << "Please enter a temperature in Celsius: ";

    // Get the temperature
    float celsius;
    cin >> celsius;

    // Convert the temperature to Fahrenheit
    float fahrenheit = (celsius * 9.0f) / 5.0f + 32;


    // Display temperatures
    cout << celsius << " Celsius in Fahrenheit is " << fahrenheit << endl;

}
