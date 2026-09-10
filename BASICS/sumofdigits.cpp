#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "Enter the N : ";
    cin >> n;

    int sum = 0;
    while (n != 0)
    {
        int last = n%10;
        sum += last;
        n = n/10;
    }

    cout<<sum;

    return 0;
}