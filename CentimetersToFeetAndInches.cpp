// CentimetersToFeetAndInches.cpp

#include <iostream>

using namespace std;

int main()
{
    // Prompt the user to enter distance in centimeters
    cout << "Please enter a distance in centimeters ";
        
    // Get cm
    int centimeters;
    cin >> centimeters;

    // Calculate feet in cm
    float totalFeet = centimeters / 30.48f;
    int justFeet = (int)totalFeet;

    // Calculate inches in cm
    int justInches = (int)((totalFeet - justFeet) * 12);

    // Display info to the user
    cout << "Feet = " << justFeet << endl;
    cout << "Inches = " << justInches << endl;

}
