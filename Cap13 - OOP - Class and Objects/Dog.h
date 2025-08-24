#ifndef _DOG_H
#define _DOG_H

#include <string>
#include <iostream>


class Dog{
    
private:

    std::string name;
    int age;
    int human_age;

public:

    std::string get_name();
    int get_age();
    int get_human_age();
    void set_name(std::string newName);
    void set_age(int name);  
    void speak();  
};



#endif