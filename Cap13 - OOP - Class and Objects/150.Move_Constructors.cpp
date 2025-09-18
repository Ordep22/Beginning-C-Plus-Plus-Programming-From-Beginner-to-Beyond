//
// Created by Pedro Pereira on 18/09/2025.
//
#include <iostream>
#include <vector>

using namespace std;


class Move
{
  private:
    int *data;
  public:
    void set_data_value(int d);
    int  get_data_value();

    //Contructor
    Move(int d);

    //Copy constructor
    Move(const Move &source);

    //Move constructor
    Move(Move &&source) noexcept;

    //Destructor
    ~Move();
};

Move::Move(int d)
{
  data = new int;
  *data = d;
  cout << "Contructor for:" << d << endl;

}

Move::Move(const Move &source)
:Move{*source.data}
{
  cout << "Copy constructor for:" << *data << endl;
}

//Move vector
Move::Move(Move &&source) noexcept
:data{source.data}
{
  source.data = nullptr;
  cout << "Move constructor - moving resource:" << *data << endl;
}
Move::~Move()
{
  if(data != nullptr){
      cout << "Destructor freeing for data: " << *data << endl;
  }else{
    cout << "Destructor freeing for null" << endl;
  }
  delete data;
}



int main()
{
  vector<Move> vec;
  vec.push_back(Move(10));
}