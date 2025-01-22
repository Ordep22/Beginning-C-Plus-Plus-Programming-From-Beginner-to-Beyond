//
// Created by Pedro Pereira on 1/21/2025.
//
#include <iostream>

using namespace std;

void swap(int &first, int &second) noexcept;
void ShowValues (int &first, int &second);

int main(){

  int first = 7;
  int second = 13;

  ShowValues(first, second);
  swap(first, second);

}


void swap (int &first,int &second) noexcept {

  int temp  = first;
  first = second;
  second = temp;

  ShowValues(first, second);

}

void ShowValues (int &first, int &second) {

  cout << "The values are: "<< endl;
  cout << "First Number: "<< first << endl;
  cout << "Second Number: "<< second << endl;

}

