#include <iostream>
#include <string.h>

using namespace std;

// Define the claas methods and elements
class Account
{
private:
    string name;
    double balance;

public:
    void set_balance(double bal) { balance = bal; }
    double get_balance() { return balance; }

    void set_name(string n);
    string get_name();

    bool deposit(double amount);
    bool withdraw(double amount);
};

// Crate the elements from the class method
void Account::set_name(string n)
{
    name = n;
}

string Account::get_name()
{
    return name;
}

bool Account::deposit(double amount)
{
    // if verify amount
    balance += amount;
    return true;
}

bool Account::withdraw(double amount)
{
    if (balance - amount >= 0)
    {
        balance -= amount;
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    cout << "Running 'runnable'" << endl;
    Account frank_account;
    frank_account.set_name("Frank`s Account");
    frank_account.set_balance(1000.0);

    if (frank_account.deposit(200.0))
    {
        cout << "Deposit OK" << endl;
    }
    else
    {
        cout << "Withdraw OK" << endl;
    }

    if (frank_account.withdraw(500.0))
    {
        cout << "Withdrawal OK" << endl;
    }
    else
    {
        cout << "Not sufficient funds" << endl;
    }

    if (frank_account.withdraw(1500.0))
    {
        cout << "Withdraw OK" << endl;
    }
    else
    {
        cout << "Not sufficient funds" << endl;
    }

    return 0;
}