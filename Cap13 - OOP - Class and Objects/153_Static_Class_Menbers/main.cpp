//
// Created by Pedro Pereira on 23/09/2025.
//
#include "Player.h"

void display_active_players() {
  // Call the static method directly by the class
  cout << "Active players at this moment: " << Player::get_num_players() << endl;
}

int main() {
  display_active_players(); //Before create any player

  Player hero("Hero", 100, 50);
  Player villain("Vilain");

  display_active_players();

  {
    Player copy_of_hero {hero};
    display_active_players();
  } // copy_of_hero is destructed here, after get out of the scope

  display_active_players();

  return 0;
}

