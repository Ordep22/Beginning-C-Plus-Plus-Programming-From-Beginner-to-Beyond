#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){

    string inputMessage {};
    string outputMessage {};
    string editingMessage {};
    string left_side_editing_message {};
    string right_side_editing_message {};
    int messageZise {};
    int element_message_position {};

    cout << "Enter our message: " << endl;
    getline(cin, inputMessage);
    messageZise = inputMessage.length();
    
    for (int i  = 0; i <= messageZise; ++i)
    { 
            left_side_editing_message = inputMessage.substr(0,i);
            element_message_position = i-1; 
            if(element_message_position >= 0){
                right_side_editing_message = inputMessage.substr(0,element_message_position);
                reverse(right_side_editing_message.begin(),right_side_editing_message.end());
            }

            outputMessage = left_side_editing_message + right_side_editing_message;
            cout << outputMessage << endl; 
    }

}