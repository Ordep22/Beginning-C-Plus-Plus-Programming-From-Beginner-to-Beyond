//
// Created by Pedro Pereira on 3/11/2025.
//

#include <iostream>
#include <string>
#include <utility>

using namespace std;

class Player
{
  private:
    string name;
    int health {0};
    int xp {0};

  public:
    void setName(string player_name){name = std::move(player_name);}
    void setHealth(int player_health){health = player_health;}
    void setXP(int player_xp){xp = player_xp;}
    void ShowPlayer()
    {
      cout << "-------------------------------------------------" << endl;
      cout << "              Player Information" << endl;
      cout << "-------------------------------------------------" << endl;
      cout << "Name: "<< name << "\n" << "Health: "<< health << "\n" << "XP: " << xp << endl;
      cout << "-------------------------------------------------" << endl;
    }
};

int main()
{
  string name {"Pedro"};

  Player playerOne;
  playerOne.setName(name);
  playerOne.setHealth(100);
  playerOne.setXP(100);
  playerOne.ShowPlayer();
}