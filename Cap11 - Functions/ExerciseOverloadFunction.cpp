#include "ExerciseOverloadFunction.h"

int main()
{
    int squareLenth {0};
    double length {0};
    double width {0};

    cout << "==============================================" << endl;
    cout << "Enter a lenth of a square: ";
    cin >> squareLenth;
    cout << "The area of square is: " << square(squareLenth) << endl;
    cout << "==============================================" << endl;

    
    cout << "==============================================" << endl;
    cout << "Enter a length of a rectangle: ";
    cin >> length;
    cout << "Enter a width of a rectangle: ";
    cin >> width;
    cout << "The are of rectangle is: " << rectangel(length,width) << endl;
    cout << "==============================================" << endl;

    

}


int square(int lenth)
{
    return find_area(lenth);
}

int find_area(int lenth)
{
    return pow(lenth,2.0);
}

double rectangel(double length, double width)
{
    return find_area(length, width);
}

double find_area(double length, double width)
{
    return length*width;
}
