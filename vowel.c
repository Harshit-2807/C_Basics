#include <stdio.h>
int main()
{
    char a;
    printf("Enter character :\n");
    scanf("%c",&a);
    if(a=='A'||a=='a'||a=='E'||a=='e'||a=='I'||a=='i'||a=='O'||a=='o'||a=='U'||a=='u')
        printf("Vowel \n");
    else
        printf("Consonant \n");
    return 0;
}