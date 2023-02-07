#include <stdio.h>
int main()
{
    // // Prime Number.
    // int n,i=2,c=0;
    // printf("Enter number :");
    // scanf("%d",&n);
    // do
    // {
    //     if(n%i==0)
    //         c++;
    //     i++;
    // }while(i<=n);
    // if(c==1)
    //     printf("Prime Number");
    // else
    //     printf("Non-Prime Number");

    // // Remove odd digits from number
    // int n,num=0,r,rev=0,i;
    // printf("Enter Number :");
    // scanf("%d",&n);
    // do
    // {
    //     r=n%10;
    //     rev=rev*10+r;
    //     n/=10;
    // }while(n>0);
    // do
    // {
    //     r=rev%10;
    //     rev/=10;
    //     if(r%2==1)
    //         continue;
    //     num=num*10+r;
    // }while(rev>0);
    // printf("%d",num);

    // Celcius to Fahrenheit
    float c,f;
    printf("Enter temperature in celcius :");
    scanf("%f",&c);
    f=(c*9/5)+32;
    printf("Temperature in fahrenheit :%.1f",f);

    return 0;
}