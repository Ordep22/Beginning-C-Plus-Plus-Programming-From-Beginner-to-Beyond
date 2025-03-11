//
// Created by Pedro Pereira on 3/6/2025.
//

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Player
{
public:

    //attributes
    string name {"Player"};
    int helth {100};
    int xp {3};


    //methods
    void talk(const string& text_to_say) const{cout << name << " says: "<< text_to_say << endl;}
    bool is_dead();

};

class Account {
public:
    //Atributes
    string name;
    double balance {0.0};

    //methods
    bool deposit(double bal) {
        cout << "The deposit of $" << bal << " was complited" << endl;
        balance += bal;
        cout << "The new balance is $" << balance << endl;
        return true;
    };
    bool withdraw(double bal) {
        cout << "The loot of $" << bal << " was complited" << endl;
        balance -= bal;
        cout << "The new balance is $" << balance << endl;
        return true;
    };
};


int main(){

    Account Pedro_Account;

    Pedro_Account.name = "Pedro's Account";
    Pedro_Account.balance = 5000;
    Pedro_Account.deposit(1000.00);
    Pedro_Account.withdraw(500.00);

    Player Pedro;
    Pedro.name = "Pedro";
    Pedro.helth = 150;
    Pedro.xp = 10;
    Pedro.talk("Hi there!!!");


    /*
    auto *enemy = new Player;
    enemy->name = "Enemy";
    enemy->helth = 100;
    enemy->xp = 15;
    enemy->talk("I'll distroy you!!!");


    Player Vitor;
    Player Pereira;

    Player players[] = {Pedro, Vitor, Pereira};

    vector <Player> playersVector {Pedro, Vitor};
    playersVector.push_back(Pereira);

    */
    return 0;
}
