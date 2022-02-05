#include<stdio.h>

/* program to remove trailling blanks and tabs 
    from each line of input, and delete entirely blanks lines. */

#define MAX_LINE 1000   /* maximum length of input line */

void remove_blanks_tabs(char s[],char result[], int lim);

main()
{
    int c, i;
    char line[MAX_LINE];    /* input line */
    char result[MAX_LINE];  /* line without blanks or tabs */

    i = 0;
    while(((c = getchar()) != EOF) && (i < MAX_LINE - 1)){
        line[i] = c;
        if(c == '\n'){
            remove_blanks_tabs(line, result, MAX_LINE);
            printf("%s", result);
        }
        ++i;
    }
}

void remove_blanks_tabs(char s[],char r[], int lim){
    int i,j;

    for(i = 0; i < lim -1 && s[i] != '\0'; ++i){
        if(s[i] != ' ' && s[i] != '\t')
            continue;
        r[j] = s[i];
        ++j;
    }
    r[j] = '\0';
}