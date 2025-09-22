//
// Created by Pedro Pereira on 22/09/2025.
//

#include <iostream>

using namespace std;

class Player
{
  public:
    string name;
    int age;
    int helth;
    int xp;
    void show_Player();
    Player(string name, int age, int helth, int xp);
};

Player::Player(string name, int age, int helth, int xp)
: name(name), age(age), helth(helth), xp(xp)
{
  cout << "Running the constructors" << endl;
}

void Player::show_Player()
{
  cout << "Player name: " << this->name << endl; //This usage to access information form the methods.
}

int main()
{
  Player player_One("Pedro",28,100,100);
  player_One.show_Player();
  return 0;
}





