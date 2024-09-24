#include <iostream>

using namespace std;

unsigned long long fibonacci(unsigned long long number);

unsigned long long fibonacci(unsigned long long number)
{
    if(number <= 1)
    {
        return number;
    }
    return (fibonacci(number - 1) + fibonacci(number -2)); //recursion
}

int main()
{
    cout << "The Fibonacci sequence is:" << endl;
    cout << fibonacci(40) << endl;
    return 0;
}