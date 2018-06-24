#include <stdio.h>
#include <limits.h>
#include <float.h>

/* Write a program to determine the ranges of char, short, int, and long variables,
   both signed and unsigned, by printing appropriate values from standard headers, and
   by direct computation. Harder if you compute them: determine the ranges of the various
   floating-point types */

int main() {
	// CHAR
	printf("\n Bits of type char: %d\n\n", CHAR_BIT);
	printf("Maximum value of type char: %d\n", CHAR_MAX);
	printf("Minimum value of type char: %d\n\n", CHAR_MIN);
	
	// UNSIGNED CHAR
	printf("Maximum value of type unsigned char: %u\n\n", UCHAR_MAX);

	// SIGNED CHAR	
	printf("Maximum value of type signed char: %d\n\n", SCHAR_MAX);
	printf("Minimum value of type signed char: %d\n\n", SCHAR_MIN);
	
	// SHORT
	printf("Maximum value of type short: %d\n", SHRT_MAX);
	printf("Minimum value of type short: %d\n\n", SHRT_MIN);
	printf("Maximum value of type unsigned short: %u\n\n", USHRT_MAX);

	// INT
	printf("Maximum value of type int: %d\n", INT_MAX);
	printf("Minimum value of type int: %d\n\n", INT_MIN);
	printf("Maximum value of type unsigned int: %u\n\n", UINT_MAX);

	// LONG
	printf("Maximum value of type long: %l\n", LONG_MAX);
	printf("Minimum value of type long: %l\n\n", LONG_MIN);
	printf("Maximum value of type unsigned long: %l\n\n", ULONG_MAX);

	// FLOAT
	printf("Maximum value of type float: %f\n", FLT_MAX);
	printf("Minimum value of type float: %f\n\n", FLT_MIN);
	
	// DOUBLE
	printf("Maximum value of type double: %f\n", DBL_MAX);
	printf("Minimum value of type double: %f\n\n", DBL_MIN);

	// LONG DOUBLE
	printf("Maximum value of type long double: %L\n", LDBL_MAX);
	printf("Minimum value of type long double: %L\n\n", LDBL_MIN);
}
