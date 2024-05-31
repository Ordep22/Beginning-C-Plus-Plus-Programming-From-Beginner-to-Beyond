#include <iostream>

using namespace std;

int CalcPrice(int smallRoom, int bigRoom);


int main(){

    int numberOfsmallRooms = 0U;
    int numberOfbigRooms = 0U;
    const int estimateExpiry = 30U;
    const double tax = 0.06F;
    float serviceCost = 0.00F;
    

    cout << "Hello Welcome to Frank's Carpet Clening Service" << endl;
    cout << "Insert the number of small rooms:" << endl;
    cin >> numberOfsmallRooms;
    cout << "Insert the number of big rooms:" << endl;
    cin >> numberOfbigRooms;
    
    serviceCost = CalcPrice(numberOfsmallRooms, numberOfbigRooms);
    

    cout << "=================================================" << endl;
    cout << "Estimate for carpet cleaning service:" << endl;
    cout << "Number of small rooms: " << numberOfsmallRooms << endl;
    cout << "Number of big rooms: " << numberOfbigRooms << endl;
    cout << "Price per small room:$25" << endl;
    cout << "Price per big room:$35" << endl;   
    cout << "Cost:$" << serviceCost << endl;
    cout << "Tax:$" << serviceCost*tax << endl; 
    cout << "=================================================" << endl;
    cout << "Total estimate:$" << serviceCost + serviceCost*tax << endl;
    cout << "This estimate is valid for " << estimateExpiry << " days";
    cout << endl;


}

int CalcPrice(int smallRoom, int bigRoom){


    float costSmall = 0.00F;
    float costBig = 0.00F;
    float serviceCost = 0.00F;
    const double  priceSmallRoom = 25.0;
    const double  priceBigRoom = 35.0;

    costSmall = priceSmallRoom*smallRoom;
    costBig = priceBigRoom*bigRoom;

    serviceCost = costBig + costSmall;
    
    return serviceCost;

}

