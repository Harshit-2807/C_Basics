#include <stdio.h>
int main()
{
    int n,m,i,j;
    printf("Enter row and column size :");
    scanf("%d %d",&n,&m);
    int arr[n][m];
    printf("Enter array elements :");
    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
            scanf("%d",&arr[i][j]);

    // Print Array
    printf("Array elements are :\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
            printf("%d  ",arr[i][j]);
        printf("\n");
    }

    // Sum of all elements:
    int sum=0;
    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
            sum+=arr[i][j];
    printf("Sum of all elements are :%d\n",sum);

    // Sum of each row:
    for(i=0;i<n;i++)
    {
        int sum=0;
        for(j=0;j<m;j++)
            sum+=arr[i][j];
        printf("Sum of row %d is :%d\n",i,sum);
    }
    
    return 0;
}