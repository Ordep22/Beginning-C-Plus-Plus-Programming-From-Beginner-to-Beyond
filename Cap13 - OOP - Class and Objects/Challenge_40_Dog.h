//
// Created by Pedro Pereira on 17/09/2025.
//

#ifndef Challenge_40_Dog
#define Challenge_40_Dog

#include <string>
#include <iostream>

using namespace std;

class Dog
{
    string name;
    int age;

  public:
    Dog(string name, int age):name(name), age(age){}
    //Copy contructors
    Dog(const Dog &myDog) :name(myDog.name), age(myDog.age) {cout << "Dog copy constructor" << endl;}
    string get_name();
    void set_name(string name);
    int get_age();
    void set_age(int age);
    int get_dog_years();
    void speak();
    void show();
};

#endif





