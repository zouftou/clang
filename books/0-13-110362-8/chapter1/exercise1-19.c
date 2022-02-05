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
        line[i] = c;
        ++i;
        if(c == '\n') {
            printf("%s\n",reverse(line));
            i = 0;
        }
    }
}

char* reverse(char s[]) {
    int i;
    char t[strlen(s)];
    
    for(i = 0; i < strlen(s); ++i){
        t[i] = s[strlen(s) - 1 - i];
    }
    return t;
}