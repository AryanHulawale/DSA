#include <iostream>
using namespace std;

void prime(int n)
{
    for (int i = 2; i <= n; i++)
    {
        int flag = 0;
        for (int j = 2; j <= i - 1; j++)
        {
            if (i % j == 0)
            {
                flag++;
                break;
            }
        }
        if(flag == 0){
            printf("%d ",i);
        }
    }
}

int main()
{

    int n;
    printf("Enter the value of N : ");
    scanf("%d", &n);

    prime(n);

    return 0;
}
