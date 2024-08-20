#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){

    int number_Of_Guestes {5};
    double total_Bill {rand()};
    float individual_Bill {};
    float individual_Bill_One {};
    float individual_Bill_Two {};
    float individual_Bill_Three {};


    //cout << "Enter the amount of the bill: " << endl;
    //cin >> total_Bill;

    cout << "The amout of the bill is: "<< total_Bill << endl;

    individual_Bill = total_Bill / number_Of_Guestes;
    cout << "The individual bill is: " << individual_Bill << endl;
    
    individual_Bill_One = floor(individual_Bill);
    cout << "The individual bill one  is: " << individual_Bill_One << endl;

    individual_Bill_Two = round(individual_Bill);
    cout << "The individual bill two is: " << individual_Bill_Two << endl;

    individual_Bill_Three = ceil(individual_Bill);
    cout << "The individual bill three is: " << individual_Bill_Three << endl;






}