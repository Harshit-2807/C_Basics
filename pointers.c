// Pointer is a reference type variable which hold the address of anaother value.
// It will be declared using asterick symbol (int *a).


#include <stdio.h>
int main()
{
    // Pointers
    // int a=10;
    // int *b=&a;
    // printf("Value of a: %d\n",a);
    // printf("Address of a: %d\n",&a);
    // printf("Value of b: %d\n",*b);
    // printf("Address of b: %d\n",&b);

    // // Sum of array elements using pointer
    // int arr[5]={1,2,3,4,5};
    // int *p,i,sum=0;
    // for(i=0;i<5;i++)
    // {
    //     p=&arr[i];
    //     sum=sum+*p;
    // }
    // printf("Sum of array elements :%d",sum);

    // // Maximum element
    // int arr[5]={45,84,21,0,36};
    // int *p,i,max=0;
    // for(i=0;i<5;i++)
    // {
    //     p=&arr[i];
    //     if(*p>max)
    //         max=*p;
    // }
    // printf("Maximum element :%d",max);

    // Second largest element
    int arr[5]={45,84,21,62,36};
    int *p,i,j,c,max=0;
    
    for(j=0;j<2;j++)
    {
        for(i=0;i<5;i++)
        {
            p=&arr[i];
            if(*p>max)
            {
                max=*p;
                c=i;
            }
        }
        if(j<1)
            max=0;
        arr[c]=0;
    }
    printf("Second largest element :%d",max);

    return 0;
}
