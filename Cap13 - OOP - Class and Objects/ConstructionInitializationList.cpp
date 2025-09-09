//
// Created by Pedro Pereira on 09/09/2025.
//

#include <iostream>
#include <stdio.h>


using namespace std;


class Player
{
    private:
        string name;
        int age;
        int health;
        int xp;

    public:
        //Overload Contructors
        Player();
        Player(string name);
        Player(string name, int age, int health, int xp);
        void Display();
};

//Overload Contructors
Player::Player() :name{""}, age{0}, health{0}, xp{0}
{
    Display();
}

Player::Player(string name) :name{"Pedro"}
{
    Display();
}
Player::Player(string name, int age, int health, int xp) :name{"Pedro"}, age{28}, health{7}, xp{1000}
{
    Display();
}

void Player::Display()
{
    cout << "-------------------------------------------------" << endl;
    cout << "Player Constructor List" << endl;
    cout << "Name: " << this->name << endl;
    cout << "Age: " << this->age << endl;
    cout << "Health: " << this->health << endl;
    cout << "Xp: " << this->xp << endl;
    cout << "-------------------------------------------------" << endl;
}

int main()
{
    Player player1;
    Player player2 {"Pedro"};
    Player player3 {"Vitor",28,10,100};

    return 0;
}


