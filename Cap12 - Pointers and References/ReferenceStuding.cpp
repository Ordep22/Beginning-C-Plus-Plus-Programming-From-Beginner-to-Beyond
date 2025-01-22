//
// Created by Pedro Pereira on 1/21/2025.
//

#include <iostream>

using namespace std;

int main(){
  int variable = 10;
  int &ref_variable= variable;

  //Show the original value
  cout << "Variable = " << variable << endl;
  cout << "Reference variable = " << ref_variable << endl;
  cout << "\n";

  variable = 30;

  //Show new values
  cout << "Variable = " << variable << endl;
  cout << "Reference variable = " << ref_variable << endl;

  return 0;


}

