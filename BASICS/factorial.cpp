#include <iostream>
using namespace std;

int fact(int n)
{
    if (n == 1 || n == 0)
    {
        return 1;
    }

    return n * fact(n - 1);
}

int main()
{

    int n;
    int r;
    cout << "Enter N : ";
    cin >> n;
    cout << "Enter R : ";
    cin >> r;

    int nCr = fact(n) / (fact(r) * fact(n - r));
    printf("nCr : %d", nCr);

    return 0;
}