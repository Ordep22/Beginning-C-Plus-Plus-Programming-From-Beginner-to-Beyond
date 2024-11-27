//
// Created by Pedro Pereira on 11/26/2024.
//

#include <iostream>
 using namespace std;

int main()
{
   int score[] = {100,89,65,75,86,90,-1};
   int *score_ptr {score};
   int index {0};

   while(*score_ptr != -1)
   {
         cout <<"[" << index << "] - "<<*(score_ptr++) << endl;
         index++;
   }

    cout << "---------------------------------------------------------------" << endl;

    string s1 {"Frank"};
    string s2 {"Frank"};
    string s3 {"James"};

    string *p1 {&s1};
    string *p2 {&s1};
    string *p3 {&s3};

    cout << boolalpha;
    cout << p1 << " == " << p2 << " : " << (p1 == p2) << endl;
    cout << p1 << " == " << p2 << " : " << (p1 == p3) << endl;

    cout << *p1 << " == " << *p2 << " : " << (*p1 == *p2) << endl;
    cout << *p1 << " == " << *p3 << " : " << (*p1 == *p3) << endl;

    cout << "---------------------------------------------------------------" << endl;

    char name[] = {"Pedro Pereira"};
    char *char_ptr_one {nullptr};
    char *char_ptr_two {nullptr};
    char_ptr_one = &name[1];
    char_ptr_two = &name[4];

    cout << "In the string " << name << ", " <<"'"<<*char_ptr_two<<"'"<< " is " << (char_ptr_two - char_ptr_one) << " characters "
    "away from " << "'" <<*char_ptr_one <<"'" << endl;

















}
