//
// Created by Pedro Pereira on 17/09/2025.
//
#include <stdio.h>
#include <iostream>

using namespace std;

class Box
{
  private:
    //Do nothing
  public:
    int *data;
    Box(int value = 0);
    ~Box(){cout << "Destructor of Box" << endl;}
};

Box::Box(int value)
{
  data = new int;
  *data = value;
  cout << "Value of data is: " << *data << endl;
}


int main()
{
  Box boxOne(100);
  Box boxTwo = boxOne; //Shallow copy!

  cout << "Adress of the box one: " << boxOne.data <<"| Value of boxOne is: " << *boxOne.data << endl;
  cout << "Adress of the box two: " << boxTwo.data <<"| Value of boxTwo is: " << *boxTwo.data << endl;

}