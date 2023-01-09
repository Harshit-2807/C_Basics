#include <stdio.h>
int main()
{
    int c;
    printf("Enter character :");
    scanf("%c",&c);

    if(c>=65 && c<91)
        printf("%c",c+32);
    else
        printf("%c",c-32);
    return 0;
}