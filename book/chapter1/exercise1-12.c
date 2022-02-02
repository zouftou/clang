#include<stdio.h>

/* program that prints its input one word per line */

#define IN 0    /* inside a word */
#define OUT 1   /* outside word */

main()
{
    int c, state;

    state = OUT;

    while ((c = getchar()) != EOF)
    {
        if(c == ' ' || c == '\n' || c == '\t'){
            if(state == IN)
                putchar('\n');
            state = OUT;
        }else {
            state = IN;
            putchar(c);
        }
    }
}
