//
// Created by Pedro Pereira on 3/10/2025.
//
#include <iostream>
#include <string>
#include <vector>
using namespace std;

#ifndef CHALLENGECREATINGANDACCESSINGOBJECTS_H
#define CHALLENGECREATINGANDACCESSINGOBJECTS_H
void showCatInformations(const string& name, int age);
class Cat;
class Cat{
public:
  string name;
  int age;

  string get_cat_name(string name){return  name;}
  int get_cat_age(int age){return age;}

};

#endif //CHALLENGECREATINGANDACCESSINGOBJECTS_H


