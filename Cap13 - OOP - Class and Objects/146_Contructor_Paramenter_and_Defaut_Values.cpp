//
// Created by Pedro Pereira on 17/09/2025.
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
		
		Player(string name_val = "None", int health_val = 0, int xp_val = 0);
};

Player::Player(string name_val, int health_val, int xp_val)
	:name(name_val), health(health_val), xp(xp_val)
	{
		
		cout << "Three arguments constructors" << endl;
		
	}	

int main()
{
	Player empty;
	Player Frank("Frank");
	Player Vilain("Vilain", 100, 55);
	return 0;
}




