#include <iostream>
#include <vector>

using namespace std;

int main(){

    //vector <char> vowels; //empyt
    //vectro <char> vowels(5) //5 initialized to zero;
    vector <char> vowels {'a','e','i','o','u'};

    cout << vowels[0] <<endl;
    cout << vowels[4] <<endl;
    

    //vector <int> test_score(3);//3 elements all initialized to zero
    //vector <int> test_score(3,100) //elements all initialized to 100

    vector <int> test_score {100,98,89};

    cout << "\nTesting score using array syntax."<<endl;
    cout << "\n";
    cout << "[0] - " << test_score[0] << endl;
    cout << "[1] - " << test_score[1] << endl;
    cout << "[2] - " << test_score[2] << endl;


    cout << "\nTesting score using vector syntax."<<endl;
    cout << "\n";
    cout << "[0] - " << test_score.at(0) << endl;
    cout << "[1] - " << test_score.at(1) << endl;
    cout << "[2] - " << test_score.at(2) << endl;

    cout << "\nThere are " << test_score.size() << " score in the vector" << endl;



    cout << "\nEnter 3 test scores:";
    //cin >> test_score.at(0);
    //cin >> test_score.at(1);
    //cin >> test_score.at(2);
    
    
    for(int i =0; i < 3; i++){

        cout << "\n[" << i << "] - ";
        cin >> test_score.at(i);
        
    }

    cout << "\nUpdated the scores:"<<endl;
    for(int i =0; i < 3; i++){

        cout << "\n[" << i << "] - " << test_score.at(i) << endl;

    }

    



}