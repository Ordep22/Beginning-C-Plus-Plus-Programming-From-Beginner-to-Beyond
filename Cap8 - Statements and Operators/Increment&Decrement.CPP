#include <iostream>

using namespace std;

int main(){

    int counter = 10;
    int result  = 0;

    //Example one  - Simple increment
    /*
    cout << "Counter: " << counter << endl;

    //Simple way
    counter = counter + 1;
    cout << "Counter: " << counter << endl;


    //elegant way, one
    counter++;
    cout << "Counter: " << counter << endl;

    //elegant way, two
    ++counter;
    cout << "Counter: " << counter << endl;
    */

    //Example two - preincrement
    
    /*
    counter  = 10;
    result  = 0;

    cout << "Counter: " << counter << endl;

    result = ++counter; //Note the pre increment
    cout  << "Counter:" << counter  << endl;
    cout << "Result: " << result << endl;
    */

   //Example three - post-increment 
   /*
   counter = 10;
   result  = 0;

   cout << "Counter: " << counter << endl;
   result  = counter++;
   cout << "Counter" << counter << endl;
   cout << "Result:" << result << endl;
    */

   //Example five  - integrator and numbers

   counter  = 5;
   result  = 0;

   cout << "Counter:" << counter << endl;

   result  =  counter++ + 10;

   cout << "Counter:" << counter << endl;
   
   cout << "Result:" << result << endl;

   cout << endl;

    return 0;




    



}

