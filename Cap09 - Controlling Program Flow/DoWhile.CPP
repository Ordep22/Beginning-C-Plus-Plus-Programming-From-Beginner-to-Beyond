#include <iostream>
#include <vector>

using namespace std;


int main(){

    char selection {};

    do {

        cout<< "------------------------------------" << endl;
        cout<< "[1] - List e-mails" << endl; 
        cout<< "[2] - List names" << endl; 
        cout<< "[3] - List phone numbers" << endl; 
        cout<< "[Q] - Quit" << endl; 
        cin >> selection;
        cout<< "------------------------------------" << endl;
        if (selection == '1')
            cout << "The software will list all e-mail" << endl;
        else if (selection == '2')
            cout << "The software will list all names" << endl;
        else if (selection == '3')
            cout << "The software will list all phone numbers" << endl;
        else if ((selection == 'Q')||(selection == 'q'))
            cout << "Goodbye..." << endl;
        else
            cout << "Unknown option -- try again..." << endl;
        cout<< "------------------------------------" << endl;


    }while((selection != 'Q')&&(selection != 'q'));


    cout << endl;
    return 0;





}
