//
// Created by Pedro Pereira on 23/09/2025.
//

#include <iostream>

using namespace std;

class Player
{
  private:
    string name;
    int health;
    int xp;

  public:
    string getName() const; //Adding const at this part we have a possibilitie to ensure the access from a const contructor
    void setName(const string name);
    Player();
    Player(string name_value);
    Player(string name_value, int health, int xp);
};


Player::Player()
:Player("None", 0,0)
{
  //Do nothing
}

Player::Player(string name_value)
:Player(name_value, 0, 0)
{
  //Do nothing
}

Player::Player(string name_value, int health_value, int xp_value)
:name(name_value), health(health_value), xp(xp_value)
{
  //Do nothing
}

string Player::getName() const
{
  return name;
}

void Player::setName(const string name_value)
{
  name = name_value;
}



int main()
{
  const Player Vilain("Vilain", 100, 55);
  Player Hero {"Hero", 100,15};

  cout << "The hero name is: " << Hero.getName() << "\n"<< endl;
  cout << "The vilain name is: " << Vilain.getName() << "\n"<< endl;
}