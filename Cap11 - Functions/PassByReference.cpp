#include <iostream>
#include <vector>
#include <string>

using namespace std;

void pass_by_reference_string(vector<string> &v);
void print_vector(vector<string> &v);


void pass_by_reference_string(vector<string> &v)
{
    v.clear();
}

void print_vector(vector<string> &v)
{
    cout << "=================================" << endl;
    cout << "[ ";
    for(auto item:v)
    {
        cout << item + " ";
    }
    cout << "]";
    cout << endl << "=================================" << endl;
        
}

int main()
{
    vector<string> stooges {"Larry", "Moe", "Curly"};
    print_vector(stooges);
    pass_by_reference_string(stooges);
    print_vector(stooges);
    return 0;
}