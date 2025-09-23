// Player.h
#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include <string>

using namespace std;

class Player {
private:
  string name;
  int helath;
  int xp;
  static int num_players;

public:
  // Constructors & Destructor
  Player(string name_val = "None", int helath_val = 0, int xp_val = 0);
  Player(const Player& source);
  ~Player();

  string get_name() const;
  int get_helath() const;
  int get_xp() const;

  static int get_num_players();
};

#endif //PLAYER_H