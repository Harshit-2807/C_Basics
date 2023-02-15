#include <stdio.h>
#include <string.h>
int main()
{
    char str[20];
    printf("Enter any string :");
    // scanf("%s",&str); 
    gets(str);

    printf("%s\n",str);
    strupr(str);
    printf("%s\n",str);
    strlwr(str);

    puts(str);

    strrev(str);
    puts(str);

    int size=strlen(str);
    printf("Size of %s :%d",str,size); 
    return 0;
}