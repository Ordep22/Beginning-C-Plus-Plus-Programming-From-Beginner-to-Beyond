#include <iostream>
#include <cmath>


using namespace std;

double circle_area_calculator(double);// We can't put the varible name here.

const double PI {3.14159};

int main()
{
    cout << circle_area_calculator(3.0) << endl;
    return 0;
}

double circle_area_calculator(double radius)
{
    return radius*PI;
}