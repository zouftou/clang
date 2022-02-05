#include<stdio.h>

/* program to copy input to output, replacing each
    string of one or more blanks by a single blank */

main()
{
    int c;
    int isFirst;

    isFirst = 1;

    while ((c = getchar()) != EOF)
    {
        if(c != ' '){
            putchar(c);
            isFirst = 1;
        } else {
            if(isFirst)
                putchar(c);
            isFirst = 0;
        }
    }
}