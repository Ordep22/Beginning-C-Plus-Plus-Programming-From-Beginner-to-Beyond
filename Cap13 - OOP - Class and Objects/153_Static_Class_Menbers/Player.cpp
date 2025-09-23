//
// Created by Pedro Pereira on 23/09/2025.
//
#include "Player.h"

int Player::num_players {0};

Player::Player(string name_val, int helath_val, int xp_val)
    : name{name_val}, helath{helath_val}, xp{xp_val} {
  ++num_players;
  cout << "Constructor call for " << name << ". Active players: " << num_players << endl;
}

// Construtor cpoy
Player::Player(const Player& source)
    : Player{source.name, source.helath, source.xp} {
  cout << "Copy Contructor of called for create a cpoy of: " << source.name << endl;
}

// Destrutor
Player::~Player() {
  --num_players;
  cout << "Destrutor called for: " << name << ".Active player: " << num_players << endl;
}

// Getters (const)
string Player::get_name() const { return name; }
int Player::get_helath() const { return helath; }
int Player::get_xp() const { return xp; }

// Implementation of the static method
int Player::get_num_players() {
  return num_players;
}