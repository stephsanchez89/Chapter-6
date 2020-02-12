// Lab 6.14_2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>

float JoistsCost;
float Costs2x6;
float Costs2x4;
float Costs4x4;
float Costs4x8;
float TotalCost;
float Total_Joists;
float Total_twobysix;
float Total_twobyfour;
float Total_fourbyfour;
float Total_fourbyeight;

int Joists = 25;
int twobysix = 100;
int twobyfour = 25;
int fourbyfour = 20;
int fourbyeight = 100;

using std::cout;
using std::cin;
using std::endl;
using std::fixed;
using std::setprecision;


int main()
{
   
    cout << fixed << setprecision(2);

    cout << "Enter Joists Cost: ";
    cin >> JoistsCost;

    cout << "Enter 2x6 Cost: ";
    cin >> Costs2x6;

    cout << "Enter 2x4 Cost: ";
    cin >> Costs2x4;

    cout << "Enter 4x4 Cost: ";
    cin >> Costs4x4;

    cout << "Enter 4x8 Cost: ";
    cin >> Costs4x8;

    cout << endl;
   
    Total_Joists = 25 * JoistsCost;
    Total_twobysix = 100 * Costs2x6;
    Total_twobyfour = 25 * Costs2x4;
    Total_fourbyfour = 20 * Costs4x4;
    Total_fourbyeight = 100 * Costs4x8;

    cout << "Total of Joists: 25 X " << JoistsCost << " = $" << Total_Joists << endl;
    cout << "Total of 2x6: 100 X " << Costs2x6 << " = $" << Total_twobysix << endl;
    cout << "Total of 2x4: 25 X " << Costs2x4 << " = $" << Total_twobyfour << endl;
    cout << "Total of 4x4: 20 X " << Costs4x4 << " = $" << Total_fourbyfour << endl;
    cout << "Total of 4x8 Sheet Plywood: 100 X " << Costs4x8 << " = $" << Total_fourbyeight << endl;

    cout << endl;

    TotalCost = Total_Joists + Total_twobysix + Total_twobyfour + Total_fourbyfour + Total_fourbyeight;
    cout << "Total Cost: $ " << TotalCost;

    cout << fixed << setprecision(0);

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
