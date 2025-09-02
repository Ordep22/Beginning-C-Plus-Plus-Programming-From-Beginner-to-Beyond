#ifndef DOG_H
#define DOG_H

#include <string>
#include <iostream>


class Dog{
    
    private:
        std::string name = "None";
        int age = 0;
        int newAge = 0;
        int human_age = 0;


    public:

        std::string get_name();
        int get_age();
        int get_human_age();
        void set_name(std::string newName);
        void set_age(int newAge);
        void speak();
};



#endif