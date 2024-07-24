#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main(){

    //int scores [] {100, 90, 80};

    vector <double> temperatur {40.45859,100.985,200.001236,72.5478};
    //vector <double> temperatur {};
    double averageTeperatur {};
    double total {};

    //char name[6] = "Frank";
    
    /*
    for (auto score: scores){

        cout<< score << endl;

    }
    */
    /*    
    for (auto letter: name){

        cout << letter << endl;
        
    }
    */


   for (auto temp:temperatur){

        total += temp;

   }


   if (temperatur.size()!= 0){

    averageTeperatur = total / sizeof(temperatur);

    cout << fixed << setprecision(2);
    cout << "The average temperatur is: "<< averageTeperatur << endl;

   }else{


        cout << "There aren't data"<< endl;

   }

    

   

   




}