#include <iostream>
#include <cmath>

using namespace std;


int actualNumberofDays {0};
double amount {0};
double penny {0.01};

int function_activation_count(int);

int function_activation_count(int numberOfDays)
{

    actualNumberofDays = numberOfDays;
    
    actualNumberofDays -= 1;

    amount = penny*pow(2,actualNumberofDays);

    cout << amount << endl;

    if (actualNumberofDays <= 0)
    
        return amount;

    return function_activation_count(actualNumberofDays);

}

int main()
{

    function_activation_count(16);


}