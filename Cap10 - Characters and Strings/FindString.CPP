#include <iostream>
#include <string>

using namespace std;


int main(){

    string element_one {};
    string element_two {"The secret word is Boo"};

    cout << "Enter a word to find: "<< endl;
    getline(cin, element_one);

    cout << "----------------------------------------------------------------------- " << endl;
    cout << "                             Find                              " << endl;
    cout << "----------------------------------------------------------------------- " << endl;

    size_t position = element_two.find(element_one);

    cout << position << endl;

    cout << string::npos << endl;
    

    if(position != string::npos)

        cout << "Found " << element_one << " at position: " << position << endl;
    else

        cout << "Sorry, " << element_one << "not found" << endl;
    
    cout << "----------------------------------------------------------------------- " << endl;
    cout << "----------------------------------------------------------------------- " << endl;






}