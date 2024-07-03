#include <iostream>

using namespace std;

int main()
{

    bool equalResult(false);
    bool notEqualresult(false);

    int numberOne;
    int numberTwo;
    char charOne;
    char charTwo;
    double doubleOne;
    double doubleTwo;

    //Transfor the output in a boolean result
    cout << boolalpha;

    /*
        cout << "Enter two intergers: " << endl;
        cin >> numberOne >> numberTwo;
        equalResult = (numberOne == numberTwo);
        notEqualresult = (numberOne!= numberTwo);
        cout << "Comprasion result (equal): " << equalResult << endl;
        cout << "Comparation result (not equal): " << notEqualresult << endl;
    */

    /*
        cout  << "Enter two characters:"<<endl;
        cin >> charOne >> charTwo;
        equalResult = (charOne == charTwo);
        notEqualresult = (charOne != charTwo);
        cout << "Comprasion result (equal): " << equalResult << endl;
        cout << "Comparation result (not equal): " << notEqualresult << endl;

    */

    //For critical application we can't use double becouse the compilar make aproximations
    cout << "Enter two doubles:" << endl;
    cin >> doubleOne >> doubleTwo;
    equalResult = (doubleOne == doubleTwo);
    notEqualresult = (doubleOne != doubleTwo);
    cout << "Comprasion result (equal): " << equalResult << endl;
    cout << "Comparation result (not equal): " << notEqualresult << endl;







}