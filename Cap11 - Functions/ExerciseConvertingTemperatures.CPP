#include "ExerciseConvertingTemperatures.h"


using namespace std;

int main()
{
    double  temperaturIncelcius {};
    cout << "=================================================" << endl;
    cout << "Enter a temperatur in Celcius to convert: ";
    cin >> temperaturIncelcius;
    cout << "=================================================" << endl;
    show_loading();
    cout << "=================================================" << endl;
    cout << temperaturIncelcius << "C"<< " = " << convert_celcius_Fahrenheit(temperaturIncelcius) << "F" << endl;
    cout << temperaturIncelcius << "C"<< " = " << convert_celcius_Kelvin(temperaturIncelcius) << "K" << endl;
    cout << "=================================================" << endl;   
}

double convert_celcius_Fahrenheit(double temperature)
{
    double temperatureFahrenheit {};
    temperatureFahrenheit = (temperature*9/5) + 32;
    return temperatureFahrenheit;
}
double convert_celcius_Kelvin(double temperature)
{
    double temperatureKelvin {};
    temperatureKelvin = temperature + 273.15;
    return temperatureKelvin;
}
void show_loading()
{
    for(int i = 0; i < 10; i++)
    {
       cout << i*10 << "%" << " Loading " << endl;
       Sleep(10);
       //system("cls");
    }   
}
