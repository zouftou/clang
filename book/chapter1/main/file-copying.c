#include<stdio.h>

/* Verify the the expression getchar() != EOF is 0 or 1 
    Write a program to print the value of EOF */

int main()
{
    int c;

    c = getchar() != EOF;
    printf("%d\n",c);

    printf("%d\n",EOF);
}

