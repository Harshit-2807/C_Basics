#include <stdio.h>
int main()
{
    char c;
    printf("Enter any character : ");
    scanf("%c",&c);
    printf("ASCII value :%d\n",c);
    for (int i = 91; i < 97; i++)
    {
        /* code */
        printf("%c",i);
    }
    
    
    return 0;
}