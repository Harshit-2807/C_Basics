// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int a,b,c,t;
    
    printf("Enter I value :");
    scanf("%d",&a);
    
    printf("Enter II value :");
    scanf("%d",&b);
    
    c=a+b;
    
    //printf("Sum is %d",c);

    printf("value 1 :%d\n",a);
    printf("value 2 :%d\n",b);

    //Swapping
    t=a;
    a=b;
    b=t;

    printf("value 1 :%d\n",a);
    printf("value 2 :%d\n",b);

    return 0;
}