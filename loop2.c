#include <stdio.h>
int main()
{
    int n,i,j,c=0;

    // // Print anything "n" times.
    // printf("Enter start: ");
    // scanf("%d",&i);
    // printf("Enter last: ");
    // scanf("%d",&n);
    // while(i<=n)
    // {
    //     printf("Hello :)\n");
    //     c++;
    //     i++;
    // }
    // printf("Loop Count: %d\n",c);

    // // Count number of digits.
    // printf("Enter number: ");
    // scanf("%d",&n);
    // c=0;
    // while(n>0)
    // {
    //     c++;
    //     n/=10;
    // }
    // printf("No. of Digits: %d",c);

    // // Sum of digits.
    // int r,sum=0;
    // printf("Enter number: ");
    // scanf("%d",&n);
    // while(n>0)
    // {
    //     r=n%10;
    //     sum+=r;
    //     n/=10;
    // }
    // printf("Sum of Digits: %d",sum);

    // // Reverse of number.
    // int r,rev=0;
    // printf("Enter number: ");
    // scanf("%d",&n);
    // while(n>0)
    // {
    //     r=n%10;
    //     rev=rev*10+r;
    //     n/=10;
    // }
    // printf("Reverse of Number: %d",rev);

    // // Pallindrome Number.
    // int r,rev=0,a;
    // printf("Enter number: ");
    // scanf("%d",&n);
    // a=n;
    // while(n>0)
    // {
    //     r=n%10;
    //     rev=rev*10+r;
    //     n/=10;
    // }
    // printf(rev==a?"Pallindrome no.":"Not Pallindrome no.");

    // // Replace 7 with 3 in reverse number.
    // int r,rev=0,a;
    // printf("Enter number: ");
    // scanf("%d",&n);
    // a=n;
    // while(n>0)
    // {
    //     r=n%10;
    //     if(r==7)
    //         r=3;
    //     rev=rev*10+r;
    //     n/=10;
    // }
    // printf("Replaced reverse number: %d",rev); 


    // Patterns:
    
    // 54321
    // 4321
    // 321
    // 21
    // 1
    printf("Enter pattern value :");
    scanf("%d",&n);
    i=n;
    while(i>0)
    {
        j=i;
        while(j>0)
        {
            printf("%d",j);
            j--;
        }
        printf("\n");
        i--;
    }

    return 0;
}