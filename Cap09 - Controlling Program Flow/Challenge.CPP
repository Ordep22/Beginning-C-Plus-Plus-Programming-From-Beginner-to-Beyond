#include<iostream>
#include<vector>

using namespace std;

int main(){

    char choice {};
    bool control {true};
    int lastNumber {};
    vector <int> listNumbers {};
    
    do{

        cout << "------------------------------------------" << endl;
        cout << "              Enter your choise           " << endl;
        cout << "[P] - Print numbers" << endl;
        cout << "[A] - Add numbers" << endl;
        cout << "[M] - Display mean of the numbers" << endl;
        cout << "[S] - Display the smallest number" << endl;
        cout << "[L] - Display the largest number" << endl;
        cout << "[Q] - Print numbers" << endl;
        cout << "------------------------------------------" << endl;
        cin >> choice;
        cout << "------------------------------------------" << endl;


        switch (choice)
        {
            case 'P':
            case 'p':
                
                cout << "[P] - Print numbers" << endl;

                cout << "["; 
                for (auto  i  = 0; i < listNumbers.size(); ++i){
                    cout << " " << listNumbers[i];
                }
                cout << " ]" << endl; 
                break;

            case 'A':
            case 'a':

                cout << "[A] - Add numbers" << endl;
                cin>>lastNumber;
                listNumbers.push_back(lastNumber);
                break;

            case 'M':
            case 'm':
            {  
                float size {};
                float sum {0};
                float average {}; 

                cout << "[M] - Display mean of the numbers" << endl;

                size = listNumbers.size();

                for (int i  = 0; i < size; i++){

                    sum = sum + listNumbers[i];
                    
                }  
                 
                average  =  sum/size;

                cout << "The average is: " << average << "."<< endl;
                
                break;
            }
            case 'S':
            case 's':
            {
                int smallestElement = listNumbers[0];
                int size {};

                //{1,2,3,4,5,6}
                //{2,10,8,4,1,3} --> {1,2,3,4}
                cout << "[S] - Display the smallest number: ";

                size = listNumbers.size();

                for(int i = 0; i < size; i++){
                    
                    if (listNumbers[i] < smallestElement){

                        smallestElement  = listNumbers[i]; 

                    }

                }

                cout << smallestElement << endl ;                   
  
                break;

            }
                
            case 'L':
            case 'l':
            {
                int largestElement = listNumbers[0];
                int size {};

                cout << "[L] - Display the largest number: ";

                size = listNumbers.size();

                for(int i = 0; i < size; i++){
                    
                    if (listNumbers[i] > largestElement){

                        largestElement  = listNumbers[i]; 

                    }

                }

                cout << largestElement << endl ;  
                break;
            }
                

            case 'Q':
            case 'q':
                cout << "[Q] - Quitting from application" << endl;
                control = false;
                break;
            
            default:
                cout << "Wrong value try again" << endl;
                break;
        }


    }while (control != false);
  





}