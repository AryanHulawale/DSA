#include <stdio.h>

int main()
{

    int n;
    printf("Enter the N : ");
    scanf("%d", &n);

    int rev = 0;
    while (n)
    {
        int lst = n % 10;
        rev = rev * 10 + lst;
        n = n / 10;
    }

    printf("Reverse : %d", rev);

    if(n==rev){
        printf("The Number is Pallidrome");
    }
    else{
        printf("The Number is Not Pallidrome");
    }

    return 0;
}