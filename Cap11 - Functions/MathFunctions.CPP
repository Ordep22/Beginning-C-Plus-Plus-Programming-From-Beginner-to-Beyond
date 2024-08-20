#include <iostream>
#include <cmath>

using namespace std;

int main(){

    double inputNumber {};
    double inputPower {};
     
    cout << "Enter a number (double)" << endl;
    cin >> inputNumber;

    cout << "The sqrt of " << inputNumber << " is: " << sqrt(inputNumber) << endl;
    cout << "The coube root of " << inputNumber << " is: " << cbrt(inputNumber) << endl;

    cout << "Enter a power to rise" << endl;
    cin >> inputPower;
    cout << inputNumber << " rise to the " << inputPower << " power is: " << pow(inputNumber,inputPower) << endl;






}