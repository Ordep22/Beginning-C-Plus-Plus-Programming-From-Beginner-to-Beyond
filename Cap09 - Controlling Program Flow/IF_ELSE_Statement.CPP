 #include <iostream>

 using namespace std;

 int main(){

    int number  = 0;
    const int min = 10;
    const int max = 100;


    cout << "Enter a number between " << min << " and " << max << ": ";
    cin >> number;

    if(number >= min && number <= max){

        if (number == min){

            cout << "The number is the min value!";
        
        }else if (number == max){

           cout << "The number is the max value!";     

        }


    }else{

        if(number < min){

            cout <<  "The number is lower them min value";

        }else if (number > max){

            cout << "The number is bigger them max value";

        }

     }


 }