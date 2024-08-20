#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){


    int randomNumber {};
    int minimalValue {1};
    int maximalValue {6};
    size_t count {10};

    cout << "RAND_MAX on my system is:" << RAND_MAX << endl;
    srand(time(nullptr));

    for (size_t i{1}; i <= count; ++i){

        randomNumber = rand() % maximalValue + minimalValue;
        cout << randomNumber << endl;
    }

    cout << endl;
    

}