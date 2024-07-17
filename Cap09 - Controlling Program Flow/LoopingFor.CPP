#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector <int> numbers {10,20,30,40,50};
    /**
        for (int i = 1; i <= 10; i += 2)
        {

            cout << i << endl;
        }

        for (int i = 10; i >= 0; i--)
        {

            cout << i << endl;
        }

        for (int i = 10; i >= 0; i--)

            cout << i << endl;

            cout << "End of the code";

    */

    /*
    for (int i = 1, j = 5; i <= 5; i++, j++)
    {

        cout << i << " + " << j << " = " << i + j << endl;
    }
    */
    /*
    for (int i = 1; i <= 100; i++)
    {

        //cout << i;

        cout << i << ((i % 10 == 0) ? "\n" : " ");
        
                if (i % 10 == 0)
                {

                    cout << endl;
                }
                else
                {

                    cout << " ";
                }
        
    }
    */

   for (unsigned int i  = 0; i < numbers.size();++i){

        cout << numbers[i] << endl;


   }


}
