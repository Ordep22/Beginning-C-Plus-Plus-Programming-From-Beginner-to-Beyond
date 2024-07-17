#include <iostream>

using namespace std;

int main()
{

    // Example One
    /*
    int number;

    cout << "Enter an interger: " << endl;
    cin >> number;

    if (number % 2 == 0){

        cout << "The number is divisible by two" << endl;

    }else{

        cout << "The number is not divisible by two" << endl;

    }


    //We can replace this if/else statement by a Conditional Operators

    cout  << "The number is " << ((number % 2 == 0) ? "divisible by two" : "not divisible by two");

    */

    int numberOne, numberTwo;

    cout << "Enter with tow numbers:" << endl;

    cin >> numberOne >> numberTwo;

    cout << "The number " << numberOne << " is " << ((numberOne == numberTwo) ? "equal" : "diferent") << " to " << numberTwo << endl;

    cout << "The number " << numberOne << " is " << ((numberOne % numberTwo == 0) ? "divisible" : "not divisible ") << " by " << numberTwo << endl;

    cout << "The number " << numberOne << " is " << ((numberOne > numberTwo) ? "bigger" : "smaller") << " than " << numberTwo << endl;
    

    return 0;
}