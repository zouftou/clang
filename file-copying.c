#include<stdio.h>

#undef test

int main()
{
    char c;
    int i = 0;

    do
    {
        c = getc(stdin);
        // printf("%c",c);
        printf("%d\n",i);
        i++;
        // putchar(c);
    } while (c != EOF);
}

