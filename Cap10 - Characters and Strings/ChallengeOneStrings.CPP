#include <iostream>
#include <string>
#include <cstring>
#include <cctype>

using namespace std;

int main(){


    string fullName {};
    char fullNameediting[60] {};
    
    string firstName {};
    char firstNameediting[20] {};
    
    string lastName {};
    char lastNameediting[20] {};

    cout << "----------------------------------------------------------------------- " << endl;
    cout << "                             Challenge One                              " << endl;
    cout << "----------------------------------------------------------------------- " << endl;


    cout << "Enter your first name: ";
    cin.getline(firstNameediting,20);
    //cout << firstNameediting[0];
    if(isupper(firstNameediting[0])){

        cout << "The firt character is upper case" << endl;

    }else{

        firstNameediting[0] = toupper(firstNameediting[0]);
        cout  << endl;
    }
    

    cout << "Enter your last name: ";
    cin.getline(lastNameediting,20);

    if(isupper(lastNameediting[0])){

        cout << "The firt character is upper case" << endl;

    }else{

        lastNameediting[0] = toupper(lastNameediting[0]);
    }

    //Jion the names
    strcat(fullNameediting,firstNameediting);
    strcat(fullNameediting, " ");
    strcat(fullNameediting,lastNameediting);
    cout << fullNameediting << endl;

    cout << "----------------------------------------------------------------------- " << endl;
    cout << "----------------------------------------------------------------------- " << endl;
 


    /*
    cout << "----------------------------------------------------------------------- " << endl;
    cout << "                             Challeng                              " << endl;
    cout << "----------------------------------------------------------------------- " << endl;

    
    
    cout << "----------------------------------------------------------------------- " << endl;
    cout << "----------------------------------------------------------------------- " << endl;
    */




}