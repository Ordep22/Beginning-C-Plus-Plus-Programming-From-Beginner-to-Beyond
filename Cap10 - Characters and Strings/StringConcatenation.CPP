#include <iostream>
#include<string>

using namespace std;

int main(){

    // Strings declaration 

    string element_one;
    string element_two {"Apple"}; 
    string element_three {"Banana"}; 
    string element_four {"kiwi"};  
    string element_five {"apple"}; 
    string element_six {element_one}; 
    string element_seven {element_one,0,3}; 
    string element_eigth (10,'X');



    //Comparation
    cout << "----------------------------------------------------------------------- " << endl;
    cout << "                             Concatenation                              " << endl;
    cout << "----------------------------------------------------------------------- " << endl;

    element_three = element_five + " and " + element_four + " juice";
    cout << "Element Three is now: " << element_three << endl;

    cout << "----------------------------------------------------------------------- " << endl;
    cout << "----------------------------------------------------------------------- " << endl;





}