#include <stdio.h>
int main()
{
    int n,i;
    printf("Enter no. of array elements :");
    scanf("%d",&n);
    int arr[n];
    printf("Enter array elements :");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);

    // // Odd/Even counter
    // int ec=0,oc=0;
    // for(i=0;i<n;i++)
    // {
    //     if(arr[i]%2==0)
    //         ec++;
    //     else
    //         oc++;
    // }
    // printf("No. of even elements :%d\n",ec);
    // printf("No. of odd elements :%d\n",oc);

    // // Reverse numbers of every index
    // int rar[n];
    // for(i=0;i<n;i++)
    // {
    //     int rev=0;
    //     while(arr[i]>0)
    //     {
    //         rev=rev*10+(arr[i]%10);
    //         arr[i]/=10;
    //     }
    //     rar[i]=rev;
    // }
    // for(i=0;i<n;i++)
    //     printf("%d\t",rar[i]);

    // // Linear Search
    // int s;
    // printf("Enter search element :");
    // scanf("%d",&s);
    // for(i=1;i<n;i++)
    //     if(arr[i]==s)
    //         printf("Element found at index :%d",i);

    // Array Sum
    int arr2[n],sar[n];
    printf("Enter 2nd array elements :");
    for(i=0;i<n;i++)
        scanf("%d",&arr2[i]);
    for(i=0;i<n;i++)
        sar[i]=arr[i]+arr2[i];
    printf("Sum of elements :");
    for(i=0;i<n;i++)
        printf("%d\t",sar[i]);

    return 0;
}