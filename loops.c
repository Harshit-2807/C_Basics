#include <stdio.h>
int main()
{
    int a,i;
    printf("Enter value :");
    scanf("%d",&a);
    printf("Table of %d is :\n",a);

    // Difference b/w for and while loop:
    // for loop used for finite conditions but while can be used for both finite and infinite conditions
    // Loop acts in three parts: 1. Initialization   2. Condition   3. Increment/Decrement

    // For Loop
    for(i=1;i<=10;i++)
        printf("%d   ",(a*i));

    // While Loop
    i=1;
    while(i<=10)
    {
        printf("%d   ",(a*i));
        i++;
    }

    // Do While Loop
    i=1;
    do
    {
        printf("%d   ",(a*i));
        i++;
    } while (i<=10);
    
    printf("%d",i);
    return 0;
}