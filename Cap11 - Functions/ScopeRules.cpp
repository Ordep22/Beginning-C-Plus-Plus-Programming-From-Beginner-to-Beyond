#include <iostream>

using namespace std;

int globalNumber {300}; //Global variable - declared outside any class or function

int main()
{


    int numberOne {100};
    int numberTwo {200};

    cout << "Local number is " << numberOne << " in inner block in main" << endl;
    cout  << "Out of the inner block main we can see: " << globalNumber << endl;

    //Create a new level of scope 
    {
        int numberOne {150};
        cout << "Inner this scope numberOne is: " << numberOne << endl;
    } 

    cout << "The second local number is: " << numberTwo << endl;


}