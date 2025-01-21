//
// Created by Pedro Pereira on 1/20/2025.
//

/*
 *Using references in range-based for loop
 */
#include <iostream>
#include <vector>

using namespace std;

int main(){

  vector<string> stooges {"Joao","Pedro","Barquinho"};

  int num {100};
  int &ref {num};

  cout << "---------------------------------" << endl;
  cout << num << endl;
  cout << ref << endl;
  cout << "---------------------------------" << endl;

  num = 200;
  cout << "---------------------------------" << endl;
  cout << num << endl;
  cout << ref << endl;
  cout << "---------------------------------" << endl;

  num = 300;
  cout << "---------------------------------" << endl;
  cout << num << endl;
  cout << ref << endl;
  cout << "---------------------------------" << endl;

  //Str is a COPY of the each vector element
  for (auto str:stooges) {
    str = "Funny";
  }

  //No changes
  for (auto str:stooges) {
    cout << str << endl;
  }

  //Str is a reference to each vector element
  cout << "---------------------------------" << endl;
  for (auto &str:stooges) {
    str = "Good";
  }

  //Now the vector element have changed
  cout << "---------------------------------" << endl;
  for (auto const &str:stooges) {
    cout << str << endl;
  }
  cout << "---------------------------------" << endl;
  return 0;
}