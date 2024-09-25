#include <iostream>
#include <math.h>

using namespace std;

int characterSum {0};

int sum_of_digits(int);

int sum_of_digits(int number)
{
    //int characterSum {};
    int newNumber;
    int character;
    int manipulationNumber;

    newNumber = (int (number/10));

    manipulationNumber  = newNumber*10;

    character = number - manipulationNumber;

    characterSum += character;

    if ((number/10) < 1)
    {
        cout << "The character sum is:" << characterSum << endl;
        return characterSum;
    }

    return sum_of_digits(newNumber);
}

int main()
{
    //sum_of_digits(12345);
    sum_of_digits(1000);
}