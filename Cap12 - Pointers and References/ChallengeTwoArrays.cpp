//
// Created by Pedro Pereira on 2/24/2025.
//

#include <stdio.h>
#include <iostream>

using namespace std;

void Print_Array(int *arr, int size);
int *Apply_All_Of_Array(int* arrayOne,int sizeArrayOne, int* arrayTwo, int sisizeArrayTwo);


int main()
{
  int arrayOne[3] = {1,2,3};
  int sizeArrayOne = sizeof(arrayOne)/sizeof(int);
  int arrayTwo[2] = {2,3};
  int sizeArraTwo = sizeof(arrayTwo)/sizeof(int);

  int* arryThree_ptr = Apply_All_Of_Array(&arrayOne[0],sizeArrayOne,&arrayTwo[0],sizeArraTwo);
  Print_Array(arryThree_ptr,sizeArrayOne*sizeArraTwo);
}

void Print_Array(int* arr,int size)
{
  cout << "----------------------------------------------------" << endl;
  cout << "                 New array" << endl;
  cout << "----------------------------------------------------" << endl;

  for(auto i=0;i<size;i++)
  {
    if( i == 0) {
      cout << "[" << arr[i] << ",";
    }else if ((i > 0) && (i <= size-1)) {

      if ( i == (size-1)) {
        cout << arr[i] << "]";
      }else {
        cout << arr[i] << ",";
      }
    }
    ++arr[i];
  }
  cout << "\n----------------------------------------------------" << endl;
}

int *Apply_All_Of_Array(int* arrayOne,int sizeArrayOne, int* arrayTwo, int sisizeArrayTwo) {

  int *arrayThree {};
  static int sizeArrayThree = sizeArrayOne*sisizeArrayTwo;
  arrayThree = new int[sizeArrayThree];
  static int i = 0;
  static int j = 0;
  static int index = 0;
  cout << "----------------------------------------------------" << endl;
  cout << "            Result of multiplication" << endl;
  cout << "----------------------------------------------------" << endl;
  for (i = 0; i < sizeArrayOne; i++) {
    for (j = 0; j < sisizeArrayTwo; j++) {
      arrayThree[index] = arrayOne[i] * arrayTwo[j];
      if (index < sizeArrayThree) {
        cout << "arrayThree[" << index << "] = " << *arrayThree << endl;
        ++index;
      }

    }
  }
  return arrayThree;
}


