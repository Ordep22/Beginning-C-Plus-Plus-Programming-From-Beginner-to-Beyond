#include <iostream>

using namespace std;

void ResultCalculator(int &result, int numberOne, int numberTwo)
{
    result+= numberOne + numberTwo;
}

int IncreaseVariables(int variableOne, int variableTwo)
{
    int result {};
    result  = variableOne + variableTwo;
    ResultCalculator(result, variableOne, variableTwo);
    return result;
}


int main()
{
    int variableOne {10};
    int variableTwo {20};
    int variableThree {0};

    variableThree = IncreaseVariables(variableOne, variableTwo);

    cout << "The final result is: ";
    cout << variableThree << endl;
    return 0;

}