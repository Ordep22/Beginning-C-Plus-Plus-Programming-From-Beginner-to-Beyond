#include <iostream>
#include <string>

using namespace std;

int main(){

   string element_one {"This is a test"};

    cout << "----------------------------------------------------------------------- " << endl;
    cout << "                             Looping                              " << endl;
    cout << "----------------------------------------------------------------------- " << endl;

    cout  << element_one.substr(0,4) << endl;
    cout  << element_one.substr(5,2) << endl;
    cout  << element_one.substr(10,4)<< endl;

    cout << "----------------------------------------------------------------------- " << endl;
    cout << "----------------------------------------------------------------------- " << endl;




}