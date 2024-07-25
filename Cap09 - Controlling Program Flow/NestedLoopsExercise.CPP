#include <iostream>
#include <vector>

using namespace std;

int main(){


    vector <int> listNumbers {2,4,6,8};
    vector <int> productSum {};
    int sum {};


    for(int i = 0; i < listNumbers.size(); ++i){
        for(int j = i + 1; j < listNumbers.size(); ++j){

            cout << "[" << listNumbers[i] << "]" << "*" << "[" << listNumbers[j] << "]" << endl;

            if (i != j){

                sum  = sum + listNumbers[i]*listNumbers[j];

            }
            

        }


    }

    cout << "------------------------------------------" << endl;
    cout << "The result of the sum is: " << sum << endl;
    cout << "------------------------------------------" << endl;


}

