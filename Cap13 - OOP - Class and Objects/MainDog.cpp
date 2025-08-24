#include "Dog.h"

using namespace std;

int main()
{
    Dog myDog;
    string tempName;
    int tempAge;

    // User interface
    cout << "Enter the dog's name:" << endl;
    cin >> tempName;
    cout << "Enter the  dog's age:" << endl;
    cin >> tempAge;

    // User data presetantion
    myDog.set_name(tempName);
    myDog.set_age(tempAge);
    myDog.get_name();
    myDog.get_age();
    myDog.get_human_age();

    return 0;
}