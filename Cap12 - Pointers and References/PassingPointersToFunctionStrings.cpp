//
// Created by Pedro Pereira on 1/6/2025.
//

#include <iostream>
#include <vector>
#include <string>

using namespace std;

void Display(const vector<string> *const v)
{
    //(*v).at(0) = "Funny";
    //(*v)[0] = "Unfunny";
    for(auto str:*v)
      {
      cout<<str<<endl;
      }
    cout << endl;
    //v = nullptr;
}


int main()
{
   vector<string> message {"Pedro","Vitor","Pereira"};
   Display(&message);
}