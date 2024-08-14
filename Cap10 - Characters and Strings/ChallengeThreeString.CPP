#include <iostream>
#include <string>
#include <cctype>
#include <vector>

using namespace std;

int main(){

    string alphabet {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    string key  {"XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr"};
    string enterMessage {};
    string encryptingMessage {};
    string decryptingMessage {};
    //string outputMessage {};
    vector <string> outputMessage {};
    


    cout << "----------------------------------------------------------------------- " << endl;
    cout << "                             Challenge One                              " << endl;
    cout << "----------------------------------------------------------------------- " << endl;

    cout << "Enter with your messsage: " << endl;
    getline(cin, enterMessage);

    //Encrypting Message

    for (auto item:enterMessage){

        int position = alphabet.find(item);

        //cout << position << endl;

        if (position != string::npos){

            encryptingMessage += key.at(position);
            
        }else{

            encryptingMessage += item;
        }  
    }  

    cout << "Encrypting Message" << endl;  
    cout << encryptingMessage << endl;

    //Decrypting Message

    for (auto item:encryptingMessage){

        int position = key.find(item);

        if (position != string::npos){

            decryptingMessage += alphabet.at(position);
            
        }else{

            decryptingMessage += item;
        }  
    } 

    cout << "Decrypting message" << endl; 
    cout << decryptingMessage << endl;

    cout << "----------------------------------------------------------------------- " << endl;
    cout << "                                                                         " << endl;
    cout << "----------------------------------------------------------------------- " << endl;
    

}