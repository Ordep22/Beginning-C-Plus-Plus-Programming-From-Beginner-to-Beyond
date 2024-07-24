#include <iostream>

using namespace std;


int main(){

    cout << "----------------" << endl;
    
    for (int numberOne  = 1; numberOne <= 10; ++numberOne){
        for (int numberTwo = 1; numberTwo <= 10; ++numberTwo){
            cout << numberOne << "*" << numberTwo << " = " << numberOne * numberTwo << endl; 
        }
        cout << "----------------" << endl;
    }


}