#include <iostream>
#include <string>

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
    cout << "                             Inicialization                              " << endl;
    cout << "----------------------------------------------------------------------- " << endl;
    cout << boolalpha;

    cout << element_two << " == " << element_five << ": " << (element_two == element_five) << endl;
    cout << element_two << " == " << element_three << ": " << (element_two == element_three) << endl;
    cout << element_two << " != " << element_three << ": " << (element_two != element_three) << endl;
    cout << element_two << " < " << element_three << ": " << (element_two < element_three) << endl;
    cout << element_two << " > " << element_three << ": " << (element_two > element_three) << endl;
    cout << element_three << " > " << element_two << ": " << (element_three > element_two) << endl;
    
    cout << "----------------------------------------------------------------------- " << endl;
    cout << "----------------------------------------------------------------------- " << endl;






}