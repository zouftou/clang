#include<stdio.h>
#include<string.h>

/* program to reverse input line */

#define MAX_LINE 1000

char* reverse(char s[]);

main()
{
    int c, i;
    char line[MAX_LINE];

    i = 0;
    while ((c = getchar()) != EOF){
        line[i++] = c;
        if(c == '\n') {
            printf("%s",reverse(line));
            i = 0;
        }
    }
}

char* reverse(char s[]) {
    int i;
    char t[strlen(s)+1];
    
    for(i = 0; i < strlen(s); ++i){
        t[i] = s[strlen(s) - 1 - i];
    }
    t[i] = '\0';
    return t;
}