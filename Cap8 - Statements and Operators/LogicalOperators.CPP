#include <iostream>

using namespace std;

int main(){

    int num = 0;
    const int lower = 10;
    const int upper = 20;

    cout << boolalpha;

    //Determine if an interger is btween two other intergers
    //assume lower < upper

    cout << "Enter an interger - the bounds are " << lower << " and " << upper << ": ";
    cin >> num;

    if (num > lower && num < upper) {

        cout << num << " is between " << lower << " and " << upper << endl;

    }else if (num < lower ||  num > upper){

        cout << num << " is outside of the bounds " << lower << " and " << upper << endl;

    }else if (num == lower){

        cout << num << " is the lower bound" << endl;

    }else if (num == upper) {

        cout << num << " is the upper bound" << endl;
    }else{


        cout << num << "ERROR" << endl;

    }
    






}