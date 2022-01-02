#define _CRT_SECURE_NO_WARNNINGS
#include <stdio.h>
#define IS_CAPITAL(x) (x >= 'A' && x <= 'Z')
#define IS_SMALL(x) (x >= 'a' && x <= 'z')


int main()
{
    char ch;

    printf("Enter any character: ");
    ch = getchar();

    if (IS_CAPITAL(ch))
        printf("'%c' is uppercase\n", ch);
    else if (IS_SMALL(ch))
        printf("'%c' is lowercase\n", ch);
    else 
        printf("Entered character is not alphabet");

    return 0;
}
