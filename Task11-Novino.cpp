/******************************************************************************
Program to convert Fahrenheit temperature to a Celcius temperature.

Programmed by: Jolly Novino
Date Accomplished: May 26, 2022

*******************************************************************************/
#include <iostream>
#include <iomanip>

using namespace std;

//Converts a Fahrenheit ttemperature to a Celcius temperature
double celcius(double fahrenheit);

//Display output. Assumes that cDegrees
//Celcius is equivalent to fDegrees Fahrenheit.
void showResults (double fDegrees, double cDegrees);


int main()
{
    double fTemperature, cTemperature;
    
    cout << "I will convert a Fahrenheit Temperature "
        << "to Celcius. \n"
        << "Enter a temperature in Fahrenheit: ";
    cin >>fTemperature;
    
    cTemperature = celcius(fTemperature);
    
    showResults(fTemperature, cTemperature);
    return 0;
}
//Function definitions
double celcius(double fahrenheit)
{
    return ((5.0/9.0)*(fahrenheit - 32));
}


void showResults(double fDegrees, double cDegrees)
{
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(1);
    cout << fDegrees
        <<" degrees Fahrenheit is equivalent to\n"
        <<cDegrees <<" degrees Celcius.\n";
        return;
}
