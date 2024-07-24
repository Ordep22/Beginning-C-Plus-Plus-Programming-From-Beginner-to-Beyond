#include <iostream>

using namespace std;

int main(){

    int number{0};
    bool done {false};

    /*
    cout << "Enter a positive interger - start the countdown:";
    cin >> number;

    while (number > 0)
    {

        cout << "["<< number-1 << "]" << " - " << number << endl;
        --number;

    }

    cout << "Blastoff" << endl;
    */


   /*
   cout << "Enter a positive interger bigger than 100:" << endl;
   cin >> number;

    while (number >= 100){


        cout << "Enter a positive interger bigger than 100:"<< endl;
        cin >> number;


    }

    cout << "Thanks" << endl;
    */

    while(!done){

        cout << "Enter a positive interger between 1 and 5:" << endl;
        cin >> number;

        if ((number <= 1 ) || (number >= 5)){

            cout << "Out of range, try again!";

        }else{

            cout << "Thanks!" << endl;
            done = true;
        }
    }

    cout << endl;
    return 0;

}