#include<stdio.h>

/*
    program detab that replaces tabs in the input with the
    proper number of blanks to space to the next tab stop.
    Assume a fixed set of tab stops, say every n columns.
    Should n be a variable or symbolic parameter?
*/

main() {

    char c;

    while ((c = getchar()) != EOF) {
        if(c == '\t')
            c = "   ";
    }
}