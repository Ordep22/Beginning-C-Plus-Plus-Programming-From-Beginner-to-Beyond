//
// Created by Pedro Pereira on 11/25/2024.
//

#include <iostream>
#include <vector>

using namespace std;


int main() {

  vector <int> array_one {0,1,2,3,4,5};
  int score[] {100,95,89};
  int *score_ptr  {score}; // Here the pointer is pointed for the firs element in the array score

  cout << "The name of the array points to your first element: " << score << endl;
  cout << "The firs element pointed by the array_one is: " << *score << endl;

  cout << "The address of the element pointed by the pointer is: " << score << endl;
  cout << "The element pointed by the pointer is: " << *score << endl;

  cout << "------------------------Pointer name------------------------" << endl;
  for (int i =0; i < 3; i++) {
    cout << "[" << i << "] - " << *(score_ptr + i) << endl;
  }
  cout << "------------------------------------------------------------" << endl;

  cout << "------------------------Array name------------------------" << endl;
  for (int i =0; i < 3; i++) {
    cout << "[" << i << "] - " << *(score + i) << endl;
  }
  cout << "----------------------------------------------------------" << endl;




}
