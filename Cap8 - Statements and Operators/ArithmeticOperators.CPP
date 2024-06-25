#include <iostream>
#include <vector>

using namespace std;

int main(){

    /* 
    Arithimetic Operators

    + addition
    - subtraction
    * multiplacation
    / division
    % module or remainder (works only with intergers)

   >> +,-,* and / are overloaaded to work with multiple types such as int,
    double, etc.
   >> % Only for integer types
    
    */

   int numberOne {10};
   int numberTwo {20};

   cout << "The sum (+) is:"<< endl;
   cout << numberOne << " + " << numberTwo << " = " << numberTwo + numberOne << endl;

   cout << "The subtraction (-) is:"<< endl;
   cout << numberTwo << " - " << numberOne << " = " << numberTwo - numberOne << endl;

   cout << "The multiplication (*) is:"<< endl;
   cout << numberOne << " * " << numberTwo << " = " << numberTwo * numberOne << endl;

   cout << "The division (/) is:"<< endl;
   cout << numberTwo << " / " << numberOne << " = " << numberTwo / numberOne << endl;

   /*In this case we have a specifc behavior cause we are working with interger numbers*/
   cout << "The division (/) is:"<< endl;
   cout << numberOne << " / " << numberTwo << " = " << numberOne / numberTwo << endl;

   numberTwo = 3;

   cout << "The module (%) is:"<< endl;
   cout << numberOne << " % " << numberTwo << " = " << numberOne % numberTwo  << endl;




}