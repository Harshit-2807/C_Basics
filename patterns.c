    // Pattern Printing
#include <stdio.h>
int main()
{
    int i,j,k,l,n,y,x;
    scanf("%d",&n);

    // 1  2  3  4  5
    // 1  2  3  4  5
    // 1  2  3  4  5
    // 1  2  3  4  5  
    // 1  2  3  4  5

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
            printf("%d  ",j);
        printf("\n");
    }
    printf("\n");


    // 1  3  5  7  9
    // 1  3  5  7  9
    // 1  3  5  7  9  
    // 1  3  5  7  9
    // 1  3  5  7  9

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=2*n;j+=2)
            printf("%d  ",j);
        printf("\n");
    }
    printf("\n");


    // 1  1  1  1  1
    // 2  2  2  2  2
    // 3  3  3  3  3
    // 4  4  4  4  4  
    // 5  5  5  5  5

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
            printf("%d  ",i);
        printf("\n");
    }
    printf("\n");


    // 1
    // 1  2
    // 1  2  3
    // 1  2  3  4
    // 1  2  3  4  5

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
            printf("%d  ",j);
        printf("\n");
    }
    printf("\n");


    // 1
    // 2  2
    // 3  3  3
    // 4  4  4  4
    // 5  5  5  5  5

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
            printf("%d  ",i);
        printf("\n");
    }
    printf("\n");


    // A  B  C  D  E
    // A  B  C  D  E
    // A  B  C  D  E
    // A  B  C  D  E
    // A  B  C  D  E

    x=65;
    for(i=1;i<=n;i++)
    {
        for(j=0;j<n;j++)
            printf("%c  ",j+x);
        printf("\n");
    }
    printf("\n");


    // A  C  E  G  I
    // I  G  E  C  A  
    // A  C  E  G  I  
    // I  G  E  C  A  
    // A  C  E  G  I 

    x=65;
    for(i=1;i<=n;i++)
    {
        if(i%2==1)
        {
            for(j=0;j<2*n;j+=2)
                printf("%c  ",j+x);
            printf("\n");
        }
        else
        {
            for(j=2*n-2;j>=0;j-=2)
                printf("%c  ",j+x);
            printf("\n");
        }
    }
    printf("\n");


    // 1  2  3  4  5
    // 5  4  3  2  1
    // 1  2  3  4  5
    // 5  4  3  2  1  
    // 1  2  3  4  5

    for(i=1;i<=n;i++)
    {
        if(i%2==1)
        {
            for(j=1;j<=n;j++)
                printf("%d  ",j);
            printf("\n");
        }
        else
        {
            for(j=n;j>=1;j--)
                printf("%d  ",j);
            printf("\n");
        }
    }
    printf("\n");


    // Z  Z  Z  Z  Z
    // Y  Y  Y  Y  Y
    // X  X  X  X  X
    // W  W  W  W  W  
    // V  V  V  V  V

    x=65;
    for(i=1;i<=n;i++)
    {
        for(j=0;j<n;j++)
            printf("%c  ",x+26-i);
        printf("\n");
    }
    printf("\n");


    // XXXXX
    // *****
    // *****
    // *****
    // XXXXX

    for(i=1;i<=n;i++)
    {
        for(j=0;j<n;j++)
            {
                if(i==1 || i==n)
                    printf("X");
                else
                    printf("*");
            }
        printf("\n");
    }
    printf("\n");


    // XXXXX
    // X***X
    // X***X
    // X***X
    // XXXXX

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i==1 || i==n || j==1 || j==n)
                printf("X");
            else
                printf("*");
        }
        printf("\n");
    }
    printf("\n");
    

    // 1
    // 1 2
    // 1 2 3
    // 1 2 3 4
    // 1 2 3 4 5
    // 1 2 3 4
    // 1 2 3
    // 1 2
    // 1

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

    // 5
    // 5 4
    // 5 4 3
    // 5 4 3 2
    // 5 4 3 2 1
    // 5 4 3 2
    // 5 4 3
    // 5 4 
    // 5

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

    // A
    // A B
    // A B C
    // A B C D
    // A B C D E
    // A B C D
    // A B C
    // A B
    // A

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


    //     1
    //    21
    //   321
    //  4321
    // 54321

    for(i=1;i<=n;i++)
    {
        for(j=0;j<n-i;j++)
            printf(" ");
        for(k=i;k>=1;k--)
            printf("%d",k);
        printf("\n");
    }
    printf("\n");

    //     5
    //    45
    //   345
    //  2345
    // 12345

    for(i=n;i>=1;i--)
    {
        for(j=1;j<i;j++)
            printf(" ");
        for(k=i;k<=5;k++)
            printf("%d",k);
        printf("\n");
    }
    printf("\n");

    //     9
    //    77
    //   555
    //  3333
    // 11111

    for(i=2*n-1;i>=1;i-=2)
    {
        for(j=1;j<i;j+=2)
            printf(" ");
        for(k=i;k<2*n;k+=2)
            printf("%d",i);
        printf("\n");
    }
    printf("\n");

    // 54321
    //  4321
    //   321
    //    21
    //     1

    for(i=n;i>=1;i--)
    {
        for(j=0;j<n-i;j++)
            printf(" ");
        for(k=i;k>=1;k--)
            printf("%d",k);
        printf("\n");
    }
    printf("\n");

    // 97531
    //  9753
    //   975
    //    97
    //     9

    for(i=1;i<=5;i++)
    {
        for(j=1;j<i;j++)
            printf(" ");
        for(k=n;k>=i;k--)
            printf("%d",k*2-1);
        printf("\n");
    }
    printf("\n");

    // ABCDE
    // A   E
    // A   E
    // A   E
    // ABCDE

    x=64;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
            {
                if(i==1 || i==n || j==1 || j==n)
                    printf("%c",x+j);
                else
                    printf(" ");
            }
        printf("\n");
    }
    printf("\n");

    //     1
    //    12
    //   123
    //  1234
    // 12345
    //  1234
    //   123
    //    12
    //     1

    for(i=1;i<n*2;i++)
    {
        if(i<=n)
        {
            for(k=0;k<n-i;k++)
                printf(" ");
            for(j=1;j<=i;j++)
                printf("%d",j);
            printf("\n");
        }
        else
        {
            for(k=1;k<=i-n;k++)
                printf(" ");
            for(j=1;j<=2*n-i;j++)
                printf("%d",j);
            printf("\n");
        }
    }
    printf("\n");

    //     1
    //    121
    //   12321
    //  1234321
    // 123454321

    for(i=1;i<=n;i++)
    {
        for(j=0;j<n-i;j++)
            printf(" ");
        for(k=1;k<=i;k++)
            printf("%d",k);
        for(l=i-1;l>=1;l--)
            printf("%d",l);
        printf("\n");
    }
    printf("\n");

    // 123454321
    //  1234321
    //   12321
    //    121
    //     1

    for(i=n;i>=1;i--)
    {
        for(j=0;j<n-i;j++)
            printf(" ");
        for(k=1;k<=i;k++)
            printf("%d",k);
        for(l=i-1;l>=1;l--)
            printf("%d",l);
        printf("\n");
    }
    printf("\n");

    // ____1
    // ___121
    // __12321
    // _1234321

    for(i=1;i<n;i++)
    {
        for(j=0;j<n-i;j++)
            printf("_");
        for(k=1;k<=i;k++)
            printf("%d",k);
        for(l=i-1;l>=1;l--)
            printf("%d",l);
        printf("\n");
    }
    printf("\n");

    //     1
    //    121
    //   12321
    //  1234321
    // 123454321
    //  1234321
    //   12321
    //    121
    //     1

    for(i=1;i<n*2;i++)
    {
        if(i<=n)
        {
            for(k=0;k<n-i;k++)
                printf(" ");
            for(j=1;j<=i;j++)
                printf("%d",j);
            for(l=j-2;l>=1;l--)
                printf("%d",l);
            printf("\n");
        }
        else
        {
            for(k=1;k<=i-n;k++)
                printf(" ");
            for(j=1;j<=2*n-i;j++)
                printf("%d",j);
            for(l=j-2;l>=1;l--)
                printf("%d",l);
            printf("\n");
        }
    }
    printf("\n");

    // 123454321
    // 1234_4321
    // 123___321
    // 12_____21
    // 1_______1

    for(i=n;i>0;i--)
    {
        for(j=1;j<=i;j++)
            printf("%d",j);
        for(k=1;k<2*(n-i);k++)
            printf("_",k);
        for(l=j-1;l>=1;l--)
        {
            if(l==n)
                continue;
            printf("%d",l);
        }
        printf("\n");
    }
    printf("\n");

    return 0;
}