#include "DefaultArgumentValues.h"

int main()
{
    double cost {0};
    cost  = costCalculator(100.0,0.6,3.5);

    cout << fixed << setprecision(2); // Define two decimal characteres for the following numbers
    cout << "Cost  is:" << cost << endl; 
    
    cost  = costCalculator(100.0,0.6);
    cout << "Cost  is:" << cost << endl; 
    
    cost  = costCalculator(100);
    cout << "Cost  is:" << cost << endl; 
    
}

double costCalculator(double baseCost, double taxtrate ,double shipping)
{
    return baseCost += (baseCost*taxtrate)+shipping;
}

