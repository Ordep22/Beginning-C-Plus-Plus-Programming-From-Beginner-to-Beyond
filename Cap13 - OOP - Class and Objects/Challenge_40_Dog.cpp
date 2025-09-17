//
// Created by Pedro Pereira on 17/09/2025.
//

#include "Challenge_40_Dog.h"

using namespace std;


string Dog::get_name()
{
    cout << "Dog's name: "<< name << endl;
    return name;
}

void Dog::set_name(string newName)
{
   name = newName;
}

int Dog::get_age()
{
    cout << "Dog's age: "<< age << endl;
    return age;
}

void Dog::set_age(int newAge)
{
 age = newAge;
}

int Dog::get_dog_years()
{
  int dog_years;
  int dog_age = age;
  dog_years = dog_age * 7;
  return dog_years;
}

void Dog::speak()
{
   cout << "Woofth!!!" << endl;
}

void Dog::show()
{
  cout << "Name: " << name << endl;
  cout << "Age: " << age << endl;
}







