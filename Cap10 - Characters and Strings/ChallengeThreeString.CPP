#include <iostream>
#include <string>
#include <cctype>
#include <vector>

using namespace std;

int main(){

    string alphabet {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    string key  {"XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr"};
    string enterMessage {};
    string editingMessage {};
    //string outputMessage {};
    vector <string> outputMessage {};
    int position {};


    cout << "----------------------------------------------------------------------- " << endl;
    cout << "                             Challenge One                              " << endl;
    cout << "----------------------------------------------------------------------- " << endl;

    cout << "Enter with your messsage: " << endl;
    getline(cin, enterMessage);

    //Pedro Pereira

    for (auto item:enterMessage){

        position = alphabet.find(item);

        cout << position << endl;

        if (position){

            editingMessage += key[position];
            
        }else if((position < 0) && (item != 10)){

            editingMessage += item;
            
        }else if (item == 10){

            outputMessage.push_back(editingMessage);
            editingMessage.erase();
        }
    }

   
    cout << outputMessage << endl;
    
    cout << "----------------------------------------------------------------------- " << endl;
    cout << "                                                                         " << endl;
    cout << "----------------------------------------------------------------------- " << endl;








}