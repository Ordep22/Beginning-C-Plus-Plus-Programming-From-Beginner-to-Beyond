#include <iostream>

using namespace std;

int age {24}; /*Global variable*/

int main(){

    int age {18}; /*This is a local variable*/

    cout << "The age is:" << age << endl;

    int coutries_represented {65}; 
    cout << "There were " << coutries_represented << " coutries represented in my meeting" << endl;

    long people_in_florid {20610000}; //long int and long are the seme declration
    cout << "There are about " << people_in_florid << " people in Florida" << endl;

    long long people_on_earth {7'600'000'000}; /*Show an error if not delcareted correctly*/
    //long people_on_earth  = 7600000000; 
    /*   
    This way is a good way to avoid some erros. Becouse if you declarete the variable like 
    long people_on_earth = 7'600'000'000;
    The code will return a value out side of the error. 
    >> output ->> There are about -989934592 people on the earth
    */
    cout << "There are about " << people_on_earth << " people on the earth" << endl;

    long long distance_to_alpha_centauri {946'100'000'0000};
    cout << "The distance to alpha centauri is "<< distance_to_alpha_centauri << " Kilometers" << endl;

    return 0;



}