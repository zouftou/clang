#include<stdio.h>

/* bare-bones of version of the UNIX program wc.
    count lines, words, and characters in input */

#define IN 1    /* inside a word */
#define OUT 0   /* outside a word */

main()
{
    int i, c, wln, state;

    state = OUT;
    wln = 0;

    while ((c = getchar()) != EOF)
    {
        if(c == ' ' || c == '\n' || c == '\t') {
            state = OUT;
            for(i = 0; i < wln; ++i)
                putchar('|');
            putchar('\n');
            wln = 0;
        } else {
            state = IN;
            putchar(c);
            ++wln;
        }
    }
}