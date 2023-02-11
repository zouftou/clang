#include <stdio.h>

/* rewrite the function "lower" which converts upper case letters to lower case, 
    with a conditional expression instead of if-else */

int lower(int);

main()
{
    printf("%c\n",lower('S'));
    printf("%c\n",lower('A'));
    printf("%c\n",lower('Z'));
    printf("%c\n",lower('a'));
}

int lower(int c)
{
    return (c >= 'A' && c <= 'Z') ? c + 'a' - 'A' : c;
}