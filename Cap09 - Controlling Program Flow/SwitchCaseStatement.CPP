#include <iostream>

using namespace std;

int main(){


    char letterGrade;

    cout << "Enter the letter grade you expect on the exam: ";
    cin >> letterGrade;

    switch (letterGrade)
    {
    case 'A':
    case 'a':

        cout << "You need a 90 or above, study hard!"<< endl;
        break;
    
    case 'B':
    case 'b':

        cout << "You need a 80 or above, go study!"<< endl;
        break;
    
    case 'C':
    case 'c':

        cout << "You need a 70- 79 for an average grade"<< endl;
        break;
    
    case 'D':
    case 'd':

        cout << "Humm, you should strive for a better grade. All you need is 60 - 69"<< endl;
        break;
    
    case 'F':
    case 'f':

        char confirm;
        cout << "Are you sure (Y/N)";
        cin >> confirm;

        if (confirm == 'Y' || confirm == 'Y')

            cout << "Ok, I guess you didn't study..." << endl;

        else if (confirm == 'n' || confirm == 'N')

            cout << "Good, go study!" << endl;
        
        else
        
            cout << "Ellegal value" << endl;
            
        break;
    
    default:

        cout << "Wrong value!"<< endl;
        break;
    }


    cout << endl;
    return 0; 



}