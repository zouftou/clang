#include<stdio.h>
#include<string.h>

int getposition(char s[], char c);

main()
{
    int i;
    char s1[] = "abcdefefegdhy";
    char s2[] = "fg";
    int occur[2];

    for (i = 0; i < strlen(s2); i++)
        occur[i] = getposition(s1,s2[i]);

    printf("%d\n", occur[0]);
    printf("%d\n", occur[1]);
}

int getposition(char s[], char c)
{
    int i;

    for (i = 0; i < strlen(s); i++)
        if(s[i] == c)
            return i;
    return -1;
}