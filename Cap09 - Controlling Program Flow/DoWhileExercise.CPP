#include <iostream>
#include <vector>

using namespace std;

int main(){


    vector <char> characters {'t','r','q','u','T'};
    vector <char> volwes {'a','e','i','o','u'};
    int volwesSize = volwes.size();
    int characterSize = characters.size();
    int incrementVolwes {0};
    int incrementCharacters {0};
    bool controlIntareation {true};


    do{

        if (characters[incrementCharacters] == volwes[incrementVolwes]){

                
                cout << "A volwel was found"<< endl;
                cout << "[" << incrementCharacters << "] - "<< characters[incrementCharacters] << endl;
                controlIntareation = false;
        }

            
        else if(characters[incrementCharacters] != volwes[incrementVolwes]){

                if(incrementVolwes < volwesSize ){

                    incrementVolwes++;
                    cout << "Incremeting volwes:  " << incrementVolwes << endl; 
                }
                    
                else{

                    cout << "ELSE" << endl;

                    if (incrementCharacters < characterSize -1){

                        incrementCharacters++;

                        cout << "Incremeting characters:  " << incrementCharacters << endl; 

                    }
                        
                    else {
                        cout << "There isn't any volwel in the vector";
                        controlIntareation = false;
                    }

                    incrementVolwes = 0;      
                }
                    
        }

    }while(controlIntareation != false);

}