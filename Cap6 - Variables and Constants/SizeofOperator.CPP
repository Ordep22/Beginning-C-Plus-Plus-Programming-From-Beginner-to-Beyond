#include <stdio.h>
#include <iostream>
#include <climits>

using namespace std;

int main(){

    cout << "sizeof information" << endl;
    cout << "=========================" << endl;

    cout << "int: " << sizeof(int) << " bytes" << endl;
    cout << "char: " << sizeof(char) << " bytes" << endl;
    cout << "float: " << sizeof(float) << " bytes" << endl;
    cout << "unsigned: " << sizeof(unsigned int) << " bytes" << endl;
    cout << "shor: " << sizeof(short) << " bytes" << endl;
    cout << "long: " << sizeof(long) << " bytes" << endl;
    cout << "long long: " << sizeof(long long) << " bytes" << endl;

    cout << "=========================" << endl;

    cout << "float: " << sizeof(float) << " bytes" << endl;
    cout << "double: " << sizeof(double) << " bytes" << endl;
    cout << "double float: " << sizeof(long double) << " bytes" << endl;

    //Use values defined in <climits>
   
    cout << "Minimum values:" << endl;
    cout << "Char:" << CHAR_MIN << endl;
    cout << "Int:" << INT_MIN << endl;
    cout << "Shot:" << SHRT_MIN << endl;
    cout << "Long:" << LONG_MIN << endl;
    cout << "Long Long:" << LLONG_MIN << endl;
    
    
    cout << "Max values:" << endl;
    cout << "Char:" << CHAR_MAX << endl;
    cout << "Int:" << INT_MAX << endl;
    cout << "Shot:" << SHRT_MAX << endl;
    cout << "Long:" << LONG_MAX << endl;
    cout << "Long Long:" << LLONG_MAX << endl;


}



