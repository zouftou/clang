#include<stdio.h>

/* program to print all input lines that are longer than 80 characters */

#define MAX_LINE 1000
#define MIN_CHAR 5

main()
{
    int c, i;
    char line[MAX_LINE];

    i = 0;
    while ((c = getchar()) != EOF){
        if( c != '\n'){
            line[i] = c;
            ++i;
        } else{
            line[i] = '\0';
            if(i >= MIN_CHAR)
                printf("%s", line);
            i = 0;
        }
    }
}