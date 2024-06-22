#include <iostream>
#include <vector>

using namespace std;
int main()
{

    vector <vector <int>> moving_rating
    {

        {1,2,3},
        {4,5,6},
        {7,8,9}


    };

    cout << "\nHere are the movie rating for reviewer #1 using array syntax:"<<endl;
    cout << moving_rating[0][0]<< endl;

    cout << "\nHere are the movie rating for reviewer #1 using vector syntax:"<<endl;
    cout << moving_rating.at(0).at(0)<< endl;
        
    return 0;







}



