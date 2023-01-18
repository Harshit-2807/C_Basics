#include <stdio.h>
int main()
{
    int i,j,n,y,x;
    
    // Print Chitkara multiple times
    // scanf("%d",&n);
    // for(i=1;i<=5;i++);
    //     printf("Chitkara %d\n",i);

    // Conditions on iterators(odd number print)
    // for(i=1;i<n;i+=2)
    //     printf("%d ",i);

    // Sum of natural numbers
    // scanf("%d",&n);
    // int sum=0;
    // for(i=1;i<=n;i++)
    //     sum+=i;
    // printf("%d ",sum);

    // Count number of iterations
    // int c=0;
    // scanf("%d",&n);
    // for(i=1;i<=n;i+=3)
    //     c+=1;
    // printf("%d ",c);

    // Even/Odd counter
    // int e=0,o=0;
    // scanf("%d",&n);
    // for(i=1;i<=n;i++)
    //     if(i%2==0)
    //         e++;
    //     else
    //         o++;
    // printf("Even Count :%d\n",e);
    // printf("Odd Count :%d\n",o);

    // // Even/Odd Sum
    // int s=0,m=0;
    // // scanf("%d",&n);
    // for(i=1;i<=n;i++)
    //     if(i%2==0)
    //         s+=i;
    //     else
    //         m+=i;
    // printf("Even Sum :%d\n",s);
    // printf("Odd Sum :%d\n",m);

    // Pattern Printing
    scanf("%d",&n);
    // for(i=1;i<=n;i++)
    // {
    //     for(j=1;j<=n;j++)
    //         printf("%d  ",j);
    //     printf("\n");
    // }
    // printf("\n");
    // for(i=1;i<=n;i++)
    // {
    //     for(j=1;j<=2*n;j+=2)
    //         printf("%d  ",j);
    //     printf("\n");
    // }
    // printf("\n");
    // for(i=1;i<=n;i++)
    // {
    //     for(j=1;j<=n;j++)
    //         printf("%d  ",i);
    //     printf("\n");
    // }
    // printf("\n");
    // for(i=1;i<=n;i++)
    // {
    //     for(j=1;j<=i;j++)
    //         printf("%d  ",j);
    //     printf("\n");
    // }
    // printf("\n");
    // for(i=1;i<=n;i++)
    // {
    //     for(j=1;j<=i;j++)
    //         printf("%d  ",i);
    //     printf("\n");
    // }
    // printf("\n");

    // x=65;
    // for(i=1;i<=n;i++)
    // {
    //     for(j=0;j<n;j++)
    //         printf("%c  ",j+x);
    //     printf("\n");
    // }
    // printf("\n");

    // for(i=1;i<=n;i++)
    // {
    //     if(i%2==1)
    //     {
    //         for(j=0;j<2*n;j+=2)
    //             printf("%c  ",j+x);
    //         printf("\n");
    //     }
    //     else
    //     {
    //         for(j=2*n-2;j>=0;j-=2)
    //             printf("%c  ",j+x);
    //         printf("\n");
    //     }
    // }
    // printf("\n");

    // for(i=1;i<=n;i++)
    // {
    //     if(i%2==1)
    //     {
    //         for(j=1;j<=n;j++)
    //             printf("%d  ",j);
    //         printf("\n");
    //     }
    //     else
    //     {
    //         for(j=n;j>=1;j--)
    //             printf("%d  ",j);
    //         printf("\n");
    //     }
    // }
    // printf("\n");

    // for(i=1;i<=n;i++)
    // {
    //     for(j=0;j<n;j++)
    //         printf("%c  ",x+26-i);
    //     printf("\n");
    // }
    // printf("\n");

    // for(i=1;i<=n;i++)
    // {
    //     for(j=0;j<n;j++)
    //         {
    //             if(i==1 || i==n)
    //                 printf("X");
    //             else
    //                 printf("*");
    //         }
    //     printf("\n");
    // }
    // printf("\n");

    // for(i=1;i<=n;i++)
    // {
    //     for(j=1;j<=n;j++)
    //         {
    //             if(i==1 || i==n || j==1 || j==n)
    //                 printf("X");
    //             else
    //                 printf("*");
    //         }
    //     printf("\n");
    // }
    // printf("\n");
    
    // for(i=1;i<=n;i++)
    // {
    //     for(j=1;j<=i;j++)
    //         printf("%d ",j);
    //     printf("\n");
    // }
    // for(i-=2;i>=1;i--)
    // {
    //     for(j=1;j<=i;j++)
    //         printf("%d ",j);
    //     printf("\n");
    // }
    // printf("\n");

    for(i=1;i<n*2;i++)
    {
        if(i<=n)
        {
            for(j=1;j<=i;j++)
                printf("%d ",j);
            printf("\n");
        }
        else
        {
            for(j=1;j<=2*n-i;j++)
                printf("%d ",j);
            printf("\n");
        }
    }
    printf("\n");

    for(i=n*2-1;i>=1;i--)
    {
        if(i>n)
        {
            for(j=n;j>=i-n+1;j--)
                printf("%d ",j);
            printf("\n");
        }
        else
        {
            for(j=1;j<=i;j++)
                printf("%d ",n-(j-1));
            printf("\n");
        }
    }
    printf("\n");

    y=n;
    x=64;
    for(i=1;i<n*2;i++)
    {
        if(i<=n)
        {
            for(j=1;j<=i;j++)
                printf("%c ",j+x);
            printf("\n");
        }
        else
        {
            for(j=1;j<=2*n-i;j++)
                printf("%c ",j+x);
            printf("\n");
        }
    }
    printf("\n");

    return 0;
}