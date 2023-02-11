#include<stdio.h>
#include<string.h>

/* Alternate version of squeeze(s1,s2) that deletes each character
     in s1 that matches any character in the string s2 */

void squeeze(char s1[], char s2[]);

main()
{
    int i;
    char s1[] = "abcdefegeh";
    char s2[] = "ef";

    squeeze(s1,s2);
    
    printf("%s\n",s1);
}

void squeeze(char s1[], char s2[])
{
    int i, j, k;

    for (k = 0; k < strlen(s2); k++)
    {
        for(i = j = 0; s1[i] != '\0'; i++)
            if(s1[i] != s2[k])
                s1[j++] = s1[i];
        s1[j] = '\0';
    }
}