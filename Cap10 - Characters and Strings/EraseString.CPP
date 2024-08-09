#include <iostream>
#include <string>

using namespace std;

int main(){

    string element_one {"This is a test"};
    string element_two {"test"};

    cout << "----------------------------------------------------------------------- " << endl;
    cout << "                             Erasing                              " << endl;
    cout << "----------------------------------------------------------------------- " << endl;

    element_one.erase(0,5);
    cout  << "New element_one is: "<< element_one << endl;
    element_two.erase();
    cout << "New element_two is: " << element_two << endl;


    cout << "----------------------------------------------------------------------- " << endl;
    cout << "----------------------------------------------------------------------- " << endl;




}