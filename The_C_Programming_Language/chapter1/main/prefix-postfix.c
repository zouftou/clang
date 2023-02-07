#include<stdio.h>

/* prefix and postfix example */

main()
{
    int a, b, c;

    a = 0;
    b = a++; // equiv : b = a ; a++;
    c = ++a; // equiv : a++; c = a;

    printf("%d\n", a);
    printf("%d\n", b);
    printf("%d\n", c);
}