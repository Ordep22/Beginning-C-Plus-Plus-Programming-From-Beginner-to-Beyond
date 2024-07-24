#include <iostream>
#include <vector>

using namespace std;

int main(){

    bool loop {true};
    int element {};
    int index {0};
    vector <int> list {};

    cout << "To exit insert -99"<< endl;

    while (loop){

        cout << "Enter a element: "<<endl;
        cin >> element;

        if (element == -99){

            loop = false;
        }else{


            list.push_back(element);

        }

    }

    cout << "--------------------------------------"<< endl;

    for(auto element:list){

        cout << "[" << index <<"]" << " - " << element << endl;  
        index++;

    }

    cout << "--------------------------------------"<< endl;




}