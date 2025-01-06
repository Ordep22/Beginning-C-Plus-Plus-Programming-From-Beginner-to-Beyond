//
// Created by Pedro Pereira on 1/6/2025.
//

#include <iostream>
#include <vector>

using namespace std;

void Display(const int *element, const int sentinel)
{
  while(*element != sentinel)
  {
    cout << *element ++ << endl;
  }
  cout << "End of the code"<< endl;
  cout << endl;
}

int main()
{
  int scores[] {10,100,-50,60,75,90,-1};
  int *scores_ptr = scores;
  Display(scores_ptr,scores[6]);
}