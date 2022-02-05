#include<stdio.h>

/* program that reads a set of text lines and prints the longest */

#define MAX_LINE 1000   /* maximum input line size */

int get_line(char line[], int maxline);
void copy(char to[], char from[]);

main()
{
    int len;    /* current line length */
    int max;    /* maximum length seen so far */
    char line[MAX_LINE];    /* current input line */
    char longest[MAX_LINE]; /* longest line saved here */

    max = 0;
    while ((len = get_line(line, MAX_LINE)) > 0)
        if(len > max){
            max = len;
            copy(longest,line);
        }
    if(max > 0)
        printf("%s", longest);
}

int get_line(char s[], int lim){
    int c, i;

    for(i=0; i<lim-1 && (c = getchar())!= EOF && c!='\n'; ++i)
        s[i] = c;
    
    if(c == '\n'){
        s[i] = c;
        ++i;
    }
    s[i] = '\0';

    return i;
}

void copy(char to[], char from[]){
    int i;
    while ((to[i] = from[i]) != '\0')
        ++i;
}