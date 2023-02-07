#include <stdio.h>
int main()
{
    int a,b,sum;
    char ch;
    do{
        printf("\nEnter I value :");
        scanf("%d",&a);
        printf("\nEnter II value :");
        scanf("%d",&b);
        sum=a+b;
        printf("\nSum :%d\n",sum);
        printf("\nDo u wanna cont.....press (y/n) :");
        // fflush(stdin);
        scanf(" %c",&ch);
    }while(ch=='y');
    return 0;
}