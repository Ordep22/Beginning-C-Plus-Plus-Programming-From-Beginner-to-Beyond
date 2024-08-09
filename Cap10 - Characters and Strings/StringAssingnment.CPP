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

    element_one = "Watermelon";
    cout << "Element One is now: " << element_one << endl;
    element_two = element_one;

    cout << "Element Two is now: " << element_one << endl; 


    element_three = "Frank";
    cout << "Element three is now: " << element_three << endl;

    element_three[0] = 'C';
    cout << "Element three is now: " << element_three << endl;
    element_three.at(0) = 'P';
    cout << "Element three is now: " << element_three << endl;
    
    cout << "----------------------------------------------------------------------- " << endl;
    cout << "----------------------------------------------------------------------- " << endl;


}