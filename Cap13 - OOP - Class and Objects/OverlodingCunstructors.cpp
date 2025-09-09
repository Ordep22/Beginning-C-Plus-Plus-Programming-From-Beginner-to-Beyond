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
      Player()
      {
        this->name = "None";
        this->age = 0;
        this->health = 0;
        this->xp = 0;
        Display();

      }
      Player(string name)
      {
         this->name = name;
         this->age = 0;
         this->health = 0;
         this->xp = 0;
         Display();
      }
      Player(string name, int age, int health, int xp)
      {
        this->name = name;
        this->age = age;
        this->health = health;
        this->xp = xp;
        Display();
      }

      void Display()
      {
        cout << "-------------------------------------------------" << endl;
        cout << "Player Constructor" << endl;
        cout << "Name: " << this->name << endl;
        cout << "Age: " << this->age << endl;
        cout << "Health: " << this->health << endl;
        cout << "Xp: " << this->xp << endl;
        cout << "-------------------------------------------------" << endl;
      }

};

int main()
{
    Player player1;
    Player player2 {"Pedro"};
    Player player3 {"Vitor",28,10,100};

    return 0;
}


