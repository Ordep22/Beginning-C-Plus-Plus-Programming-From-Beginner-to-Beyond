#include <iostream>
#include <string>

using namespace std;

int main(){

    // Strings declaration 

    string elemente_one;
    string elemente_two {"Apple"}; 
    string elemente_three {"Banana"}; 
    string elemente_four {"kiwi"};  
    string elemente_five {"apple"}; 
    string elemente_six {elemente_one}; 
    string elemente_seven {elemente_one,0,3}; 
    string elemente_eigth (10,'X');



    //Comparation
    cout << "----------------------------------------------------------------------- " << endl;
    cout << "                             Inicialization                              " << endl;
    cout << "----------------------------------------------------------------------- " << endl;

    elemente_one = "Watermelon";
    cout << "Element One is now: " << elemente_one << endl;
    elemente_two = elemente_one;

    cout << "Element Two is now: " << elemente_one << endl; 


    elemente_three = "Frank";
    cout << "Element three is now: " << elemente_three << endl;

    elemente_three[0] = 'C';
    cout << "Element three is now: " << elemente_three << endl;
    elemente_three.at(0) = 'P';
    cout << "Element three is now: " << elemente_three << endl;
    
    cout << "----------------------------------------------------------------------- " << endl;
    cout << "----------------------------------------------------------------------- " << endl;


}