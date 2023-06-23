#include <stdio.h>
#include <math.h>

/**
 * main - Prints the largest prime factor of number 612852475143
 * Return: Always 0 (Success)
 */

int main(void)

{
	long X, maxf;
	long number = 612852475143;
	double square = sqrt(number);

	for (X =1; X <= square; X++)
	{
	if (number % X == 0)
	{
		maxf = number / X;
	}
	}
	printf("%ld\n", maxf);
	return (0);
}
