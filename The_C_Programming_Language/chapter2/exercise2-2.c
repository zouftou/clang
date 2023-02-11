#include<stdio.h>

/* write a loop equivalent to the for loop above without using && or || */

#define LIM 10

main()
{
    int i;
    char c, s[LIM];

    for (i = 0; i < LIM-1; ++i)
    {
        if((c = getchar())== '\n')
            break;
        if(c == EOF)
            break;
        s[i] = c;
    }
}