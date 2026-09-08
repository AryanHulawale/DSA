#include <iostream>
using namespace std;

int main()
{

    int sum = 0;
    int n;
    cout << "Enter the Number : ";
    cin >> n;

    for (int i = 0; i <= n; i++)
    {
        if (i % 3 == 0)
        {
            sum += i;
        }
        
    }

    cout<< "The Sum is : " << sum;

    return 0;
}