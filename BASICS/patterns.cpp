#include <iostream>
using namespace std;

int main()
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 3; j >= i; j--)
        {
            cout << " ";
        }

        if (i == 0)
        {
            cout << "*";
            cout<<endl;
            continue;
        }

        if (i != 0)
        {

            cout << "*";
            for (int j = 1; j <= i * 2 - 1; j++)
            {
                cout << " ";
            }

            cout << "*";
        }
        cout << endl;
    }

    return 0;
}