#include <iostream>
#include <string>

using namespace std;

/*
input message ABC
       
       A
       ABA
       ABCBA

input message 12345

     [0]    1
     [1]    121
     [2]    12321
     [3]    1234321
     [4]    123454321

*/



int main(){

    string inputMessage {};
    string editingMessage {};
    

    cout << "Enter our message: " << endl;
    getline(cin, inputMessage );

    for (int i  = 0; i < sizeof(inputMessage); i++){

            editingMessage = inputMessage.substr(0,i+1);
            cout << editingMessage << endl; 
    }








}