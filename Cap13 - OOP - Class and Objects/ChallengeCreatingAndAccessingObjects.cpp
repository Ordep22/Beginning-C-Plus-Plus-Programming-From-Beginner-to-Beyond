//
// Created by Pedro Pereira on 3/10/2025.
//


#include "ChallengeCreatingAndAccessingObjects.h"

using namespace std;


int main()
{
  Cat LovelyCat;
  LovelyCat.name = "Meleca";
  LovelyCat.age = 3;
  showCatInformations(LovelyCat.name,LovelyCat.age);
  return 0;
}

void showCatInformations(const string& name, const int age)
{
  cout << "---------------------------------------" << endl;
  cout << "The name of the lovely cat is: " << name <<", and he has "<< age << endl;
  cout << "---------------------------------------" << endl;
}