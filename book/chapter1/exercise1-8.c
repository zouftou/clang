#include<stdio.h>

/* this program count blanks, tabs, newlines */

main()
{
    int bc, tc, nc;
    int c;

    bc = 0;
    tc = 0;
    nc = 0;

    while ((c = getchar()) != EOF)
    {
        if(c == ' ')
            ++bc;
        if(c == '\t')
            ++tc;
        if(c == '\n')
            ++nc;
    }
    printf("blanks: %d\n", bc);
    printf("tabs: %d\n", tc);
    printf("newlines: %d\n", nc);
}