#include <iostream>
#include <iomanip>
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

    
    cout << elemente_two << endl;
    cout << elemente_two.length() << endl;

    cout << "Elment seven" << endl;
    cout << elemente_seven << endl;
    

    //Initialization
    cout << "----------------------------------------------------------------------- " << endl;
    cout << "                             Inicialization                              " << endl;
    cout << "----------------------------------------------------------------------- " << endl;
    
    cout << "Element One: " << elemente_one << endl;
    cout << "Element Two: " << elemente_two << endl;
    cout << "Element Three: " << elemente_three << endl;
    cout << "Element Four: " << elemente_four << endl;
    cout << "Element Five: " << elemente_five << endl;
    cout << "Element Six: " << elemente_six << endl;
    cout << "Element Seven: " << elemente_seven << endl;
    cout << "Element Eigth: " << elemente_eigth << endl;

    cout << "----------------------------------------------------------------------- " << endl;
    cout << "----------------------------------------------------------------------- " << endl;
    

    


    
    


    







}






