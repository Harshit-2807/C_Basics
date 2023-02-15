#include <stdio.h>

// Reverse of number.
int reverse(int n)
{
    int r,rev=0;
    while(n>0)
    {
        r=n%10;
        rev=rev*10+r;
        n/=10;
    }
    // printf("Reverse of Number: %d",rev);
    return rev;
}
int main()
{
    int n,rev;
    printf("Enter number: ");
    scanf("%d",&n);
    rev=reverse(n);
    printf("Reverse of Number: %d",rev);
    return 0;
}