#include <iostream>
#include <vector>

using namespace std;

int main(){

    int vec[] = {1,2,-1,3,-1,-99,7,8,10};


    for(int i = 0; i < (sizeof(vec)/4); i++){

        if(vec[i] == -99){

            break;

        }else if(vec[i] == -1){

            continue;

        }else{

            cout << "[" << i << "]"<< vec[i] << endl;

        }

    }






}