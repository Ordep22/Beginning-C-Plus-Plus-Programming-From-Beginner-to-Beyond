//
// Created by Pedro Pereira on 1/12/2025.
//

#include <iostream>
#include <vector>

using namespace std;

#define END_OF_ARRAY (-1)

int FindMaxElement(const vector <int> *arr, size_t arrSize);

int FindMaxElement(const vector <int> *arr, const size_t arrSize) {

  int lastBiggerElement {0};
  int actualBiggerElement = (*arr)[0];

  for (size_t i = 0; i < arrSize; i++) {
    if ((actualBiggerElement < (*arr)[i])) {
      actualBiggerElement = (*arr)[i];
    }
  }
  return actualBiggerElement;
}

int main(){

  int element;
  int index;
  vector<int> numbersList{NULL};

  cout << "Enter the number of elements in the array" << endl;
  while(element != (-1)) {
    cout << "[" << numbersList.size() - 1 << "] -> ";
    cin >> element;
    if (element != END_OF_ARRAY) {
      numbersList.push_back(element);
    }
  }
  cout << "The bigger element at this vector is: " << FindMaxElement(&numbersList, numbersList.size()) << endl;
}
