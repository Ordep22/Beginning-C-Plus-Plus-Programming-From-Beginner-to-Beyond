//
// Created by Pedro Pereira on 1/6/2025.
//
#include <iostream>

using namespace std;

void Double_Calculator(int *number_ptr)
{
  *number_ptr *= 2;
}

int main()
{
  int variable {10};
  int *variable_ptr = &variable;

  cout << "First Operation"<< endl;
  cout << "Value: "<< variable << endl;
  Double_Calculator(variable_ptr);
  cout << "The new value of the variable is: "<< variable <<endl;

  cout << "----------------------------------------" << endl;
  cout << "Second Operation"<< endl;
  variable_ptr = &variable;
  cout << "Value: "<< variable << endl;
  Double_Calculator(variable_ptr);
  cout << "The new value of the variable is: "<< variable <<endl;
}


