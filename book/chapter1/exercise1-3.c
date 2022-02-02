#include<stdio.h>

/* print Fahrenheit-Celsius table
    for fahr = 0, 20, 40, ..., 300 */

main()
{
    int fahr, celsius;
    int lower, upper, step;

    lower = 0;      /* lower limit of temperature table */
    upper = 300;    /* upper limit */
    step = 20;      /* step size */

    fahr = lower;
    while(fahr <= upper){
        celsius = 5.0/9.0 * (fahr - 32);  /* 5.0/9.0 to avoid integer division truncate to zero */
        printf("%d\t%d\n", fahr, celsius);  /* can use format: "%3d\t%3d\n" for right-justified */
        fahr += step;
    }
}