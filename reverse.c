#include <stdio.h>
int main()
{
    int a,r,rev=0;
    scanf("%d",&a);
    while(a!=0)
    {
        r=a%10;
        rev=(rev*10)+r;
        a/=10;
    }
    printf("%d",rev);
    return 0;
}