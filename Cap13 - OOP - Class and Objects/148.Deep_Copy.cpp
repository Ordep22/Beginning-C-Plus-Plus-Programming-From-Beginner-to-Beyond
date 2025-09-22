//
// Created by Pedro Pereira on 18/09/2025.
//
#include <iostream>
#include <stdio.h>

using namespace std;

class Box
{

  private:
    //Do nothing

  public:
    int *data;
    Box(int value);
    Box(const Box &source);
    ~Box();
};

Box::Box(int value)
{
  data  = new int;
  *data = value;
  cout << "Box created with the value: " << *data << " at the adress: " << data << endl;
}

Box::Box(const Box &source)
{
  data  = new int;
  *data = *source.data;
  cout << "DEEP COPY: New box created with a new value.\n" << *data
       << "at the adress: " << data << endl;
}

Box::~Box()
{
  cout << "Destructor of Box" << endl;
  delete data;
}


int main()
{
  Box boxOne(100);
  Box boxTwo = boxOne; //DEEP COPY;
  Box boxThree = boxTwo;

  cout << "Adress of the box one: " << boxOne.data <<"| Value of boxOne is: " << *boxOne.data << endl;
  cout << "Adress of the box two: " << boxTwo.data <<"| Value of boxTwo is: " << *boxTwo.data << endl;
  cout << "Adress of the box two: " << boxThree.data <<"| Value of boxTwo is: " << *boxThree.data << endl;

  //Change the valu by boxTwo
  *boxTwo.data = 200;
  *boxThree.data = 300;

  cout << "Adress of the box one: " << boxOne.data <<"| Value of boxOne is: " << *boxOne.data << endl;
  cout << "Adress of the box two: " << boxTwo.data <<"| Value of boxTwo is: " << *boxTwo.data << endl;
  cout << "Adress of the box three: " << boxThree.data <<"| Value of boxTwo is: " << *boxThree.data << endl;
  return 0;

}


