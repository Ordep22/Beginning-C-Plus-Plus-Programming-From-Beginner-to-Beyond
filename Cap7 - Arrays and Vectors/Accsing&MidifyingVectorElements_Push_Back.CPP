#include <iostream>
#include <vector>

using namespace std;

int main(){

     int new_value(0);

     vector <int> test_score {100,98,89};

    cout << "Vector elements:" << endl;
    
    for(int i =0; i < test_score.size(); i++){

        cout << "\n[" << i << "] - " << test_score.at(i) << endl;
        
    }

    cout << "\nAdding new values:"<<endl;

    for(int i =0; i < 2; i++){

        cout << "\n[" << test_score.size() << "] - ";
        cin >> new_value;
        test_score.push_back(new_value);

    }

    cout << "New vector elements:" << endl;
    
    for(int i =0; i < test_score.size(); i++){

        cout << "\n[" << i << "] - " << test_score.at(i) << endl;
        
    }




}