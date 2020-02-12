// Lab 6.14_01.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>

float UnitOfWater = 1.80;
float Gallon;
float Diameter;
float Radius;
float Volume;
float UnitsOfWater;
float Depth;
float PI = 3.14159;
float Cost;

using std::cout;
using std::cin;
using std::endl;
using std::fixed;
using std::setprecision;

int main()

{
    cout << "Enter Diameter of Pool: ";
    cin >> Diameter;

    cout << "Enter Depth of Pool: ";
    cin >> Depth;

    Radius = Diameter / 2;
   // cout << Radius;

    Volume = PI * Radius * Radius * Depth;
    //cout << Volume;

    Gallon = Volume * 1728 / 231;
    //cout << Gallon;

    UnitsOfWater = Gallon / 748;
    //cout << UnitsOfWater;

    Cost = UnitOfWater * UnitsOfWater;
    cout << fixed << setprecision(2);
    cout << "Total Cost of: $" << Cost;


    return 0;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
