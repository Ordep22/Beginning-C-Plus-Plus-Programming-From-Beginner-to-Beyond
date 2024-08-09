#include <iostream>
#include <string>

using namespace std;

int main(){

    string element_one {"Apple"};

    cout << "----------------------------------------------------------------------- " << endl;
    cout << "                             Looping                              " << endl;
    cout << "----------------------------------------------------------------------- " << endl;

    for(size_t i {0}; i < element_one.length(); ++i){

        cout << element_one.at(i) <<endl;

    }

    cout << "----------------------------------------------------------------------- " << endl;
    cout << "----------------------------------------------------------------------- " << endl;




}