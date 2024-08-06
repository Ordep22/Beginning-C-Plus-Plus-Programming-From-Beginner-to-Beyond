#include<iostream>
#include<cstring>

using namespace std;

int main(){


    char firstName[10] {};
    char lastName[10] {};
    char fullName[50] {};

    cout << "---------------------------------------------------------------" << endl;
    cout << "Enter your first name:";
    cin >> firstName;
    cout << endl;

    cout << "Enter your last name:";
    cin >> lastName;
    cout << endl;

    strcpy(fullName,firstName);
    strcat(fullName," ");
    strcat(fullName,lastName);

    cout << "---------------------------------------------------------------" << endl;

    cout << "Your first "<< firstName <<" name has " << strlen(firstName) << " characters" << endl;
    cout << "Your last " << lastName <<" name has " << strlen(lastName) << " characters" << endl;
    cout << "Your full " << fullName <<" name has " << strlen(fullName) << " characters" << endl;
    
    cout << "---------------------------------------------------------------" << endl;
    

}