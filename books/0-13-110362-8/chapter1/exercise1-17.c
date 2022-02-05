#include<stdio.h>

/* program to print all input lines that are longer than 80 characters */

#define MAX_LINE 1000
#define MIN_CHAR 5

main()
{
    int c, i, nc;
    char line[MAX_LINE];

    nc = 0;

    i = 0;
    while ((c = getchar()) != EOF){
        line[i] = c;
        ++nc;
        ++i;
        if(c == '\n' && nc > MIN_CHAR) {
            line[i] = '\0';
            printf("%s", line);
            nc = 0;
            i = 0;
        }
    }
}