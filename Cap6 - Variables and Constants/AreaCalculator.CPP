#include <iostream>
using namespace std;


int main(){

    //This program will calculate the area of a room in square feet

    int room_width {0};
    int room_length {0};

    cout << "Enter the width of the room\n";
    cin >> room_width;
    
    cout << "Enter the length of the room\n";
    cin >> room_length;

    cout << "The are of the room is " << room_width * room_length << " m2" << endl;


    return 0;



}