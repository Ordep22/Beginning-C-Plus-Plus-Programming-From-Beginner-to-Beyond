#include <iostream>
#include <vector>

using namespace std;

int main()
{

    //int new_value(0);

    vector<int> test_score_one{0};

    vector<int> test_score_two{0};

    vector<vector<int>> test_score_2D;

    test_score_one.push_back(10);

    test_score_one.push_back(20);

    test_score_two.push_back(30);

    test_score_two.push_back(40);

    test_score_2D.push_back(test_score_one);

    test_score_2D.push_back(test_score_two);

    cout << test_score_2D.size() << endl;

    cout << "Vector elements = { ";

     for (int i = 0 ;  i < test_score_2D.size(); i ++)

    {
        for (int j = 0; j < test_score_2D.at(i).size(); j ++){

                cout << test_score_2D.at(i).at(j) << " ";
        }

                 
    }

    cout << "}";
}