#include <iostream>
#include <cmath>
#include "FunctionsDefinitions.h"

using namespace std;

const double pi {3.14159};
        

double circle_area_calculator(double radius)
{
        return radius*pi;
}

double cylinder_volume_calculator(double radius, double eigth)
{
        return eigth*radius*pi;
}

void get_radio_value()
{
    double radius {0};
    cout << "Enter of radios of the circle:" << endl;
    cin >> radius;
    cout << "The area of the circle with radios " << radius << " is " << circle_area_calculator(radius) << endl;
    get_height_value(radius);
}

void get_height_value(double radius) 
{
    double eigth {0};
    cout << "Enter of the eigth value of cylinder: " << endl;
    cin >> eigth;
    cout << "The volume of the cylinder with the eigth " << eigth << " is " << cylinder_volume_calculator(radius,eigth) << endl;
}

int main(){

    get_radio_value();

    return 0;
}