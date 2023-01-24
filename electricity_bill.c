#include <stdio.h>
int main()
{
    int n;
    float bill;
    printf("Enter unit used: ");
    scanf("%d",&n);
    if(n<=200)
        bill=n*3.0;
    else if(n>200 && n<=400)
        bill=200*3.0+(n-200)*4.0;
    else
        bill=200*3+200*4+(n-400)*5.50;
    if(n>300)
        bill+=bill*15/100;
    printf("%.2f\n",bill);
    printf(300<n?"Surcharge applied":"Surcharge not applied");
    return 0;
}