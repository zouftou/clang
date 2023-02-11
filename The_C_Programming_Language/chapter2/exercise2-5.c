#include<stdio.h>
#include<string.h>

/*  function any(s1,s2) which returns the first location in the string s1 where any character
 from the string s2 occurs, or -1 if s1 contains no characters from s2.*/

int* any(char s1[],char s2[]);

int getposition(char s[], char c);

main()
{
    char s1[] = "abcdefefegdhy";
    char s2[] = "fg";

    printf("%d\n", *(any(s1,s2)));
    printf("%d\n", *(any(s1,s2)+1));
}

int* any(char s1[],char s2[])
{
    int i;
    int occur[strlen(s2)];

    for (i = 0; i < strlen(s2); i++)
        occur[i] = getposition(s1,s2[i]);
    
    return occur;
}

int getposition(char s[], char c)
{
    int i;

    for (i = 0; i < strlen(s); i++)
        if(s[i] == c)
            return i;
    return -1;
}