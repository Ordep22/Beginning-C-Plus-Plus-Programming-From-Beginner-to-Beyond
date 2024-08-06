#include<iostream>
#include<cctype>
#include<cstring>

using namespace std;

int main(){
    
    /*
    char firstName[20] {};
    char lastName[20] {};
    char fullName[50] {};
    */

    char fulllNameOne[50] {};
    char temp[50] {};

    //cout << "Fisrt Name:" << firstName << endl; //will likely display grabage!
/*
    cout << "Please enter yout fist name:";
    cin >> firstName;
    cout << endl;
    
    cout << "Please enter your last name:";
    cin >> lastName;
    cout << "---------------------------------------------------------------" << endl;


    cout << "Hello, " << firstName << " your first name has " << strlen(firstName) << " characters" << endl;
    cout << "and your last name, " << lastName << " has " << strlen(lastName) << " characters" << endl;
    
    cout << "---------------------------------------------------------------" << endl;

    strcpy(fullName,firstName);
    strcat(fullName, " ");
    strcat(fullName, lastName);

    cout << "Your full name is: " << fullName << endl;
*/
    cout << "---------------------------------------------------------------" << endl;


    cout << "Please enter yout full name:";
    cin.getline(fulllNameOne, 50);
    cout << endl;

    cout << "---------------------------------------------------------------" << endl;

    cout << "Your full name is: " << fulllNameOne << endl;

    cout << "---------------------------------------------------------------" << endl;

    strcpy(temp, fulllNameOne);
    if(strcmp(temp,fulllNameOne) == 0)

        cout << temp << " and " << fulllNameOne << " are the same." << endl;
    
    else

        cout << temp << " and " << fulllNameOne << " are different." << endl;

    cout << "---------------------------------------------------------------" << endl;
    
    for(int i {0}; i <strlen(fulllNameOne); ++i){

        //cout << isalpha(fulllNameOne[i]) << endl;

        if(isalpha(fulllNameOne[i]))

            fulllNameOne[i] = toupper(fulllNameOne[i]);
    }

    cout << "Your full name is: " << fulllNameOne << endl;

    cout << "---------------------------------------------------------------" << endl;

    if(strcmp(temp,fulllNameOne) == 0)

        cout << temp << " and " << fulllNameOne << " are the same." << endl;
    
    else

        cout << temp << " and " << fulllNameOne << " are different." << endl;

    cout << "---------------------------------------------------------------" << endl;




}