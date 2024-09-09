#include "ExerciseDefaultArgument.h"

int main()
{

    cout << "For the first week" << endl;
    PrintGroceryList();

    cout << "For the second week" << endl;
    PrintGroceryList(20,10,1);




}

void PrintGroceryList(int mangos, int apples, int oranges)
{
    cout << "======================================" << endl;
    cout << "The gorcerry List is:" << endl;
    cout << "Mangos: " << mangos << endl;
    cout << "Apples: " << apples << endl;
    cout << "Oranges: " << oranges << endl;
    cout << "======================================" << endl;

 
}