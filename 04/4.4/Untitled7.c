#include <stdio.h>
int main ()
{
    char c;
    printf("Enter a character : ");
    scanf("%c",&c);

    switch(c)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("%c is a vowel",c);
            break;

        default:
            printf("%c is not a vowel",c);
            break;
    }
}
