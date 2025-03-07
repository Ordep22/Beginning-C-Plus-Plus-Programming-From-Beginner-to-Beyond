//
// Created by Pedro Pereira on 3/6/2025.
//
#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Player
{
  //attributes
  string name {"Player"};
  int helth {100};
  int xp {3};


  //methods
  void talk(string);
  bool is_dead();

};

class Account {
  //Atributes
  string name {"Account"};
  double balance {0.0};

  //methods
  bool deposit(double);
  bool withdraw(double);
};





int main(){

  Account Pedro_Account;
  Account Pereira_Account;

  Player Pedro;
  Player Vitor;
  Player Pereira;

  Player players[] = {Pedro, Vitor, Pereira};

  vector <Player> playersVector {Pedro, Vitor};
  playersVector.push_back(Pereira);

  Player *enemy {nullptr};
  enemy = new Player;
  delete enemy;

    return 0;
}