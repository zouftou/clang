#include<stdio.h>

/*
    program detab that replaces tabs in the input with the
    proper number of blanks to space to the next tab stop.
    Assume a fixed set of tab stops, say every n columns.
    Should n be a variable or symbolic parameter?
*/

main() {

    int c, n, i;
    int cur;

    n = 8;
    cur = 0;

    while ((c = getchar()) != EOF) {
        if(c == '\t'){
            for (i = n - cur; i > 0; --i)
                putchar(' ');
            cur = 0;
        }else{
            putchar(c);
            cur++;
            if(cur > n)
                cur = 0;
        }
    }
}