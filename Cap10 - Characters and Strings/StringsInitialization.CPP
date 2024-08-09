#include <iostream>
#include <iomanip>
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

    
    cout << element_two << endl;
    cout << element_two.length() << endl;

    cout << "Elment seven" << endl;
    cout << element_seven << endl;
    

    //Initialization
    cout << "----------------------------------------------------------------------- " << endl;
    cout << "                             Inicialization                              " << endl;
    cout << "----------------------------------------------------------------------- " << endl;
    
    cout << "Element One: " << element_one << endl;
    cout << "Element Two: " << element_two << endl;
    cout << "Element Three: " << element_three << endl;
    cout << "Element Four: " << element_four << endl;
    cout << "Element Five: " << element_five << endl;
    cout << "Element Six: " << element_six << endl;
    cout << "Element Seven: " << element_seven << endl;
    cout << "Element Eigth: " << element_eigth << endl;

    cout << "----------------------------------------------------------------------- " << endl;
    cout << "----------------------------------------------------------------------- " << endl;
    

    


    
    


    







}






