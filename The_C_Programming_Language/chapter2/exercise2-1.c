#include <stdio.h>
#include <limits.h>

/*	write a program to determine the ranges of char, short, int, long variables
	both signed and unsigned */

main()
{
	printf("From limits.h:\n");	
	printf("CHAR_BIT: %d\n", CHAR_BIT);
	printf("CHAR_MAX: %d\n", CHAR_MAX);
	printf("CHAR_MIN: %d\n", CHAR_MIN);
	printf("INT_MAX: %d\n", INT_MAX);
	printf("INT_MIN: %d\n", INT_MIN);
	printf("LONG_MAX: %ld\n", LONG_MAX);
	printf("LONG_MIN: %d\n", LONG_MIN);
	printf("SCHAR_MAX: %d\n", SCHAR_MAX);
	printf("SCHAR_MIN: %d\n", SCHAR_MIN);
	printf("SHRT_MAX: %d\n", SHRT_MAX);
	printf("SHRT_MIN: %d\n", SHRT_MIN);
	printf("UCHAR_MAX: %d\n", UCHAR_MAX);
	printf("UINT_MAX: %u\n", UINT_MAX);
	printf("ULONG_MAX: %lu\n", ULONG_MAX);
	printf("USHRT_MAX: %u\n", USHRT_MAX);
}