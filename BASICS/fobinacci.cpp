#include <iostream>
using namespace std;

int main()
{

    int prev = 0;
    int next = 1;
    int n = 10;

    printf("%d ", prev);
    printf("%d ", next);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", prev + next);
        int temp = next;
        next = prev + next;
        prev = temp;
    }

    return 0;
}