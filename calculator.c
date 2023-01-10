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
    // scanf("%d",&a);
    printf("Enter variables: \n");
    scanf("%d",&b);
    scanf("%d",&c);
    // if(a=='A' || a=='a' || a=='+')
    //     t=b+c;
    // if(a=='S' || a=='s' || a=='-')
    //     t=b-c;
    // if(a=='M' || a=='m' || a=='*')
    //     t=b*c;
    // if(a=='D' || a=='d' || a=='/')
    //     t=b/c;
    // // else
    // //     printf("Wrong choice\n");

    switch(a)
    {
        case 'A':
            t=b+c;
            break;
        case 'S':
            t=b-c;
            break;
        case 'M':
            t=b*c;
            break;
        case 'D':
            t=b/c;
            break;
        default:
            printf("Wrong choice");
    }
    printf("Result %d",t);
    return 0;
}