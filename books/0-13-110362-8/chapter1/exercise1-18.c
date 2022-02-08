#include<stdio.h>

/* program to remove trailling blanks and tabs 
    from each line of input, and delete entirely blanks lines. */

#define MAX_LINE 1000   /* maximum length of input line */

main()
{
    int c, i;

    i = 0;
    while(((c = getchar()) != EOF) && (i < MAX_LINE - 1)){
        if(c != ' ' && c != '\t'){
            putchar(c);
        }
        ++i;
    }
}