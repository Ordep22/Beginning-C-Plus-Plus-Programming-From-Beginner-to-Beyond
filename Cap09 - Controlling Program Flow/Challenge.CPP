#include<iostream>
#include<vector>

using namespace std;

int main(){

    char choice {};
    bool control {true};
    vector <int> listNumbers {};

    do{

        cout << "------------------------------------------" << endl;
        cout << "              Enter your choise           " << endl;
        cout << "[P] - Print numbers" << endl;
        cout << "[A] - Add numbers" << endl;
        cout << "[M] - Display mean of the numbers" << endl;
        cout << "[S] - Display the smallest number" << endl;
        cout << "[L] - Display the largest number" << endl;
        cout << "[Q] - Print numbers" << endl;
        cout << "------------------------------------------" << endl;
        cin >> choice;
        cout << "------------------------------------------" << endl;


        switch (choice)
        {
        case 'P':
        case 'p':
            
            cout << "[P] - Print numbers" << endl;

            cout << "["; 
            for (int i  = 0; i < listNumbers.size(); ++i){
                cout << " " << listNumbers[i];
            }
            cout << "]"; 
            break;

        case 'A':
            cout << "[A] - Add numbers" << endl;
            break;

        case 'M':
            cout << "[M] - Display mean of the numbers" << endl;
            break;

        case 'S':
            cout << "[S] - Display the smallest number" << endl;
            break;

        case 'L':
            cout << "[L] - Display the largest number" << endl;
            break;

        case 'Q':
        case 'q':
            cout << "[Q] - Print numbers" << endl;
            control = false;
            break;
        
        default:

            cout << "Wrong value try again";
            break;
        }


    }while (control != false);
  





}