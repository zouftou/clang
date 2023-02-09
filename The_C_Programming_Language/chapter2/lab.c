#include<stdio.h>

int lower(int c);

main()
{
    int c = 'F';
    printf("%c", lower(c));
}

/* lower: convert c to lower case; ASCII only */
int lower(int c)
{
    if(c >= 'A' && c <= 'Z')
        return c + 'a' - 'A';
    else
        return c;
}