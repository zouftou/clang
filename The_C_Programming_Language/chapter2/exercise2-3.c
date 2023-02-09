#include<stdio.h>
#include<string.h>

int htoi(char s[]);

int getdecimal(char h);

main()
{
    int a = htoi("0xDAD");
    printf("%d", a);
}

int htoi(char s[])
{
    int i, n;

    n = 0;
    for(i = 2; i < strlen(s); ++i)
        n = 16 * n + getdecimal(s[i]);
    return n;
}

int getdecimal(char h)
{
    switch (h)
    {
        case 'A':
            return 10;
        case 'B':
            return 11;
        case 'C':
            return 12;
        case 'D':
            return 13;      
        case 'E':
            return 14;
        case 'F':
            return 15; 
        default:
            return (h - '0');
    }
}