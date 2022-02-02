#include<stdio.h>

/* temperature conversion program of Section 1.2 to 
    use a function for conversion */

int convert_temperature(int t);

main()
{
    int fahr, celsius;
    int lower, upper, step;

    lower = 0;      /* lower limit of temperature table */
    upper = 300;    /* upper limit */
    step = 20;      /* step size */

    fahr = lower;
    while(fahr <= upper) {
        celsius = convert_temperature(fahr);
        printf("%d\t%d\n", fahr, celsius);  /* can use format: "%3d\t%3d\n" for right-justified */
        fahr += step;
    }
}

int convert_temperature(int fahr) {
    return 5.0/9.0 * (fahr - 32);  /* 5.0/9.0 to avoid integer division truncate to zero */
}