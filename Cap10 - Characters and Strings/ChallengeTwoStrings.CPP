#include <iostream>
#include <string>
#include <cctype>
#include <vector>

using namespace std;

int main(){

    int position {0};
    string journalEntryOne  {"Isaac Newton"};
    string newjournalEntryOne {};
    string journalEntryTwo  {"Leibniz"};
    vector <string> journalDataBase {};

    position = journalEntryOne.find(" ");
    newjournalEntryOne = journalEntryOne.substr(position + 1,sizeof(journalEntryOne));
    //cout << newjournalEntryOne << endl;

    if ((journalEntryOne[0] > journalEntryTwo[0])){

            journalDataBase.push_back(newjournalEntryOne);        
            journalDataBase.push_back(journalEntryTwo); 
    }else{

            journalDataBase.push_back(journalEntryTwo);        
            journalDataBase.push_back(newjournalEntryOne); 

    }

    for (auto item:journalDataBase){

        cout << item << endl;
    }





}