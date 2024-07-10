#include <iostream>

using namespace std;

int main(){


    int inputCents = 0;
    int dollar = 0;
    int quarter = 0;
    int dime = 0;
    int nickel = 0;
    int penny  = 0;


    cout << "Enter an amount in centes: " << endl;
    cin >> inputCents;

    dollar = inputCents/100; 
    cout << "Dollar: " <<dollar<< endl;

    quarter  = (inputCents - 100*dollar)/25;
    cout << "Quarter: " <<quarter<< endl;

    dime  = (inputCents - 100*dollar - 25*quarter)/10;
    cout << "Dime: " <<dime<< endl;

    nickel = (inputCents - 100*dollar - 25*quarter - 10*dime)/5;
    cout << "Nickel: " <<nickel<< endl;

    penny  = inputCents - 100*dollar - 25*quarter - 10*dime - 5*nickel;
    cout << "Penny: " <<penny<< endl;







}