//
// Created by Pedro Pereira on 1/7/2025.
//
#include <iostream>

using namespace std;

void multiply_with_pointers(int* ptr, int multiplieer);
int *Check_number(int *number);
int *Check_Multiplieer(int *multiplieer);

void multiply_with_pointers(int* ptr, int multiplieer)
{
  cout << "The result is: "<< *ptr * multiplieer << endl;
}

int *Check_number(int *number) {

  int *number_ptr = number;

  if(number_ptr == nullptr)
  {
    cerr << "Error: null pointer passed to the function." << endl;

  }else if  ((*number >= 0) && (*number <= 100)) {
      cout << "The value accept the conditions"<< endl;
      return number;
  }else {
    cout << "The value is out of range." << endl;
    return nullptr;
  }
}

int *Check_Multiplieer(int *multiplieer) {

  int *multiplieer_ptr = multiplieer;

  if(multiplieer_ptr == nullptr)
  {
    cerr << "Error: null pointer passed to the function." << endl;

  }else if  ((*multiplieer >= 0) && (*multiplieer <= 100)) {
    cout << "The value accept the conditions"<< endl;
    return multiplieer;
  }else {
    cout << "The value is out of range." << endl;
    return nullptr;
  }
}

int main()
{
  int number {};
  int multiplieer {};

  cout << "Enter a positive number: ";
  cin >> number;
  cout << "Enter a multiplier: ";
  cin >> multiplieer;

  if ((Check_number(&number) != nullptr) && (Check_Multiplieer(&multiplieer) != nullptr)) {
    multiply_with_pointers(&number, multiplieer);
  }
}
