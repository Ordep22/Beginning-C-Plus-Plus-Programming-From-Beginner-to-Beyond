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
    cout << boolalpha;

    cout << elemente_two << " == " << elemente_five << ": " << (elemente_two == elemente_five) << endl;
    cout << elemente_two << " == " << elemente_three << ": " << (elemente_two == elemente_three) << endl;
    cout << elemente_two << " != " << elemente_three << ": " << (elemente_two != elemente_three) << endl;
    cout << elemente_two << " < " << elemente_three << ": " << (elemente_two < elemente_three) << endl;
    cout << elemente_two << " > " << elemente_three << ": " << (elemente_two > elemente_three) << endl;
    cout << elemente_three << " > " << elemente_two << ": " << (elemente_three > elemente_two) << endl;
    
    cout << "----------------------------------------------------------------------- " << endl;
    cout << "----------------------------------------------------------------------- " << endl;






}