#include <iostream>

using namespace std;

void print_array(const int elements[],size_t size); //Const is used here to privent that the user could change the element itens
void set_array(int elements[], size_t size, int value);


void print_array(const int elements[],size_t size)
{
    cout  << "[ ";
    for (int i = 0; i < size; i++)
    {
        cout << elements[i] <<" ";
    }
    cout  << "]" << endl;
}

void set_array(int elements[], size_t size, int value)
{
    for (int i = 0; i < size; i++)
    {
        elements[i] = value;
    }

}






int main()
{

    int score[] {100,98,90,86,84};

    print_array(score,5);
    set_array(score,5,69);
    print_array(score,5);


}