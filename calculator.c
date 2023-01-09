#include <stdio.h>
int main()
{
    int a,b,c,t;
    printf("A. Add\n");
    printf("S. Subtract\n");
    printf("M. Multiply\n");
    printf("D. Divide\n");
    printf("Enter your choice\n");
    scanf("%c",&a);
    printf("Enter variables: \n");
    scanf("%d",&b);
    scanf("%d",&c);
    if(a=='A' || a=='a' || a=='+')
        t=b+c;
    if(a=='S' || a=='s' || a=='-')
        t=b-c;
    if(a=='M' || a=='m' || a=='*')
        t=b*c;
    if(a=='D' || a=='d' || a=='/')
        t=b/c;
    // else
    //     printf("Wrong choice\n");
    printf("Result %d",t);
    return 0;
}