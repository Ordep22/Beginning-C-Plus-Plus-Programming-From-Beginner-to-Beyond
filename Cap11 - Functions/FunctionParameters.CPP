#include "FunctionParameters.h"


void pass_by_value_one(int* numberOne)
{
    *numberOne = 1;    
}
void pass_by_value_two(string message_in_construction)
{
    message_in_construction = "Chanding...";
}
void pas_by_value_three(vector <string> cont_message_to_incrment)
{
    cont_message_to_incrment.clear();
}
void print_vector(vector <string> cont_message_to_show)
{
    for(auto element:cont_message_to_show)
    {
        cout << element << " ";
        cout << endl;
    }
}
int main()
{
    int first_number_to_pass {10};
    //int second_number_to_pass {20};

    cout <<"Number before calling pass_by_value_one: " << first_number_to_pass << endl;
    pass_by_value_one(&first_number_to_pass);
    cout <<"Number after calling pass_by_value_one: " << first_number_to_pass << endl;

}