#include <iostream>

using namespace std;

int main(){

    int total  = 0;
    int numberOne = 0;
    int numberTwo = 0;
    int numberThree = 0;
    const int count = 3;
    double average  = 0.0;


    cout << "Enter 3 intergers separated by spaces:" << endl;
    cin >> numberOne >> numberTwo >> numberThree;

    total  = numberOne + numberTwo + numberThree;

    average = static_cast<double>(total)/ count;

    cout << "The three numbers were: " << numberOne << "," << numberTwo << ","<< numberThree << endl;
    cout << "The sum of the number is: " << total << endl;
    cout << "The average is: " << average << endl;



    cout << endl;
    return 0;




}