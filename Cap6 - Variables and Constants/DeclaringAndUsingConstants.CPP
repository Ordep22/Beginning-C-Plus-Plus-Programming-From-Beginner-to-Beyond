#include <iostream>

using namespace std;

int CalcPrice(int numRoom);


int main(){

    int numberOfRooms = 0U;
    const int estimateExpiry = 30U;
    const double tax = 0.06F;
    float serviceCost = 0.00F;
    



    cout << "Hello Welcome to Frank's Carpet Clening Service" << endl;
    cout << "Insert the number of rooms:" << endl;
    cin >> numberOfRooms;
    
    serviceCost = CalcPrice(numberOfRooms);

    cout << "=================================================" << endl;
    cout << "Estimate for carpet cleaning service:" << endl;
    cout << "Number of rooms: " << numberOfRooms << endl;
    cout << "Price per room:$30" << endl;
    cout << "Cost:$" << serviceCost << endl;
    cout << "Tax:$" << serviceCost*tax << endl; 
    cout << "=================================================" << endl;
    cout << "Total estimate:$" << serviceCost + serviceCost*tax << endl;
    cout << "This estimate is valid for " << estimateExpiry << " days";
    cout << endl;


}

int CalcPrice(int numRoom){


    const double  pricePerRoom = 30.0;
    float serviceCost  = 0;

    serviceCost  = pricePerRoom*numRoom;
        
    return serviceCost;

}