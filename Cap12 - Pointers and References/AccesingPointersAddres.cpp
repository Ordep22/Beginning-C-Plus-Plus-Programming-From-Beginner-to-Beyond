#include <iostream>

using namespace std;

int main()
{
    //First Example    
    int nuumber1 {4};

    cout << "The value of number is: " << nuumber1 << endl;

    cout << "The zise of this number is: " << sizeof(nuumber1) << endl;

    cout << "The adress of number is: " << &nuumber1 << endl;

    //Second Example
    cout << "----------------------------------------" << endl;
    cout << "           2 - Example         " << endl;
    cout << "----------------------------------------" << endl;
    int *p;
    cout << "The value of p is: " << p << " (garbage)" << endl;
    cout << "The size of p is: " << sizeof p << endl;
    cout << "The adress of p is: " << &p << endl;

    p = nullptr; // nullptr is basicly initialize the pointer to zero. 
    cout << "The new value for p is:" << p << endl; //It's important to initialize a pointer to avoid start with garbage values.


    //Third Example
    int score {10};
    double high_temp {100.7};
    int *score_ptr {nullptr};

    score_ptr = &score;

    cout << "----------------------------------------" << endl;
    cout << "           3 - Example         " << endl;
    cout << "----------------------------------------" << endl;
    cout << "The value of score is: " << score << endl;
    cout << "The size of score is: " << sizeof score << endl;
    cout << "The adress of score is: " << &score << endl;

    //score_ptr = &high_temp; //compiler error
    score_ptr = reinterpret_cast<int*>(&high_temp);
    
    
    return 0;




}