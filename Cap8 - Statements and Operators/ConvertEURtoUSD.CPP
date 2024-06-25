#include <iostream>

using namespace std;

int main (){


    const double EUR {1.07};
    const double USD {1};
    double euros {0.0};
    double dollars {0.0};


    cout << "Wellcome to the EUR to USD converter" << endl;
    cout << "Enter the value in EUR: ";
    cin >> euros;

    dollars  = euros * EUR;

    cout << "-----------" <<"The convertion"<< "-----------" << endl;
    cout << euros << " EUR is equivalent to " << dollars << "USD";


    





}