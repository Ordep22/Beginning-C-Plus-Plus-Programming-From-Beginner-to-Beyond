#include "Dog.h"

std::string Dog::get_name()
{
    std::cout << "The dog's name is: "<< name << std::endl;
    return name;
}

int Dog::get_age()
{
    std::cout << "The dog's age is: " << age << std::endl;
    return age;
}

int Dog::get_human_age()
{
    human_age = age*7;
    std::cout << "The human's age is: " << human_age << std::endl;
    return human_age;
}

void  Dog::set_name(std::string newName)
{
    name = newName;
}

void  Dog::set_age(int newAge)
{
    age = newAge;
}

void Dog::speak()
{
    std::cout << "Woof!!!" << std::endl; 
}


