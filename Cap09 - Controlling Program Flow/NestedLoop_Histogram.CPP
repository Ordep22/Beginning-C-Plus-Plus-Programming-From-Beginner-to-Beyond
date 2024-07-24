#include <iostream>
#include <vector>

using namespace std;

int main(){

    int numberItens = 0;
    int dataItem = 0;

    cout << "How many data items do you have?"<< endl;
    cin >> numberItens;

    vector <int> data;

    for(int i = 1; i <= numberItens; ++i){

        
        cout << "Enter data item " << i << ": ";
        cin >> dataItem;
        data.push_back(dataItem);

    }

    cout << "\nDiplaying Histogram" << endl;
    //for (auto val:data){
    
    for (int index  = 0; index < numberItens ; ++index){
        
        for(int i = 1; i <= data[index]; ++i){
            cout<<"-";
        }  
        cout << endl;      
    }
   
}