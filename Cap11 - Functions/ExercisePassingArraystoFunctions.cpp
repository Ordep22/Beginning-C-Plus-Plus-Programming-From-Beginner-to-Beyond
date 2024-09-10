#include <iostream>

using namespace std;

void print_gest_list(const string gest_list[], size_t size);
void clear_gest_list(const string gest_list[], size_t size);

void print_gest_list(const string gest_list[], size_t size)
{
    cout << "===================================" << endl;
    for(int i = 0; i < size; i++)
    {
        cout << i << " - " << gest_list[i] << endl;
    }
    cout << "===================================" << endl;


}

void clear_gest_list(string gest_list[], size_t size)
{
    for(int i = 0; i < size; i++)
    {
       gest_list[i] = " ";  
    }
}



int main()
{

    string gest_list[] {"Larry", "Moe", "Curly"};

    print_gest_list(gest_list,3);
    clear_gest_list(gest_list,3);
    print_gest_list(gest_list,3);

}