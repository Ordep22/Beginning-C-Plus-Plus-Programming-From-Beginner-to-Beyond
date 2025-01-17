//
// Created by Pedro Pereira on 1/16/2025.
//

#include <iostream>
#include <string.h>
#include <string>

using namespace std;

void ReverseString(char *information, int length);

int main(){

  string information  = "PEDRO";
  char *information_ptr  = &information[0];
  int length = strlen(information_ptr);

  cout<< "Original string: " << information << endl;
  ReverseString(information_ptr,length);
  cout<< "Reversed string: " << information << endl;
}

void ReverseString(char *information, int length) {

  char *begin = information;
  char *end = information + length -1;

  for (size_t i = 0; i < length/2; i++) {

    swap(*begin, *end);
    --end;
    ++begin;
  }

}

