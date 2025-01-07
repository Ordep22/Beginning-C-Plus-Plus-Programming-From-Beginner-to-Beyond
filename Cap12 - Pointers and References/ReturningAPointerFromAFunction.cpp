//
// Created by Pedro Pereira on 1/7/2025.
//
#include <iostream>
#include <vector>

using namespace std;

int *createArray(size_t size, int init_value = 0)
{
  int *new_storage {nullptr};
  new_storage  = new int[size];
  for (size_t i =0; i < size; i++)
    {
    //new_storage[i] = int_value;
    *(new_storage + i) = init_value;
    }
    return new_storage;
}

void display(const int *const array, size_t size)
{
  cout << "--------------------------------" << endl;
  for (size_t i = 0 ; i < size; i++)
  {
    if ( i == 0)
      {
       cout << "[ ";
       cout << array[i] << ", ";
      }
    else if (i == size - 1)
      {
        cout << array[i];
        cout << " ]" << endl;
      }
    else
      {
        cout << array[i] << ", ";
      }

  }
  cout << "--------------------------------" << endl;
}

int main() {
  int *my_array {nullptr};
  size_t size;
  int init_value {};

  cout << "How many elements do you want to enter?" << endl;
  cin >> size;
  cout << "What value would you like them initialized to?" << endl;
  cin >> init_value;

  my_array = createArray(size, init_value);
  display(my_array, size);
  delete [] my_array;
  return 0;
}