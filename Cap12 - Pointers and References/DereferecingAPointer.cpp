//
// Created by Pedro Pereira on 11/22/2024.
//

#include <iostream>
#include <vector>

using namespace std;

int main() {

     int score {100};
     int *score_ptr {&score};

     cout << "------------------------------------------------------------" << endl;
     cout << "Score:" << score << endl;
     cout << "The value that score_ptr point is: "<< *score_ptr << endl;

     //Changing the value for score by the pointers
     *score_ptr = 250;
     cout << "The new value that score_ptr point is: " << *score_ptr << endl;
     cout << "Checking the new value for score: " << score << endl;
     cout << "------------------------------------------------------------" << endl;

     cout << "------------------------------------------------------------" << endl;

     double high_temp {100.7};
     double low_temp {37.4};
     double *temp_prt {&high_temp};

     cout << "High temperature is: " << high_temp << endl;
     cout << "Low temperature is: " << low_temp << endl;
     cout << "The value that temp_prt is pointing is: " << *temp_prt << endl;

     //Changing the values form the pointer
     *temp_prt = 140.16;
      temp_prt = &low_temp;
     *temp_prt = 15.9;
     cout << "High temperature is: " << high_temp << endl;
     cout << "Low temperature is: " << low_temp << endl;

    cout << "------------------------------------------------------------" << endl;

    vector <string> stooges {"Larry", "Moe","Curly"};
    vector <string> *vector_ptr {nullptr};
    int enumerator {0};

    vector_ptr = &stooges;

    cout << "The first element is: " << (*vector_ptr).at(0) << endl;

    //Running in to the elements
    cout << "Stooges" << endl;
    for( auto stooges: *vector_ptr) {
        enumerator ++;
        cout << "[" << enumerator << "] - "<< stooges << endl;
    }







}








