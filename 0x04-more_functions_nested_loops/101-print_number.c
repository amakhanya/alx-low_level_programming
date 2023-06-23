#include "main.h"
#include <stdio.h>

/**
 * print_number - Prints an integer.
 * @n: The integer to prints.
 * Return: Nothing!
 */

void print_number(int n)

{
	unsigned int K = n;

	if (n < 0)
	{
	n *= -1;
	K = n;
	_putchar('_');
	}
	K /= 10;
	if (K != 0)
	print_number(K);
	_putchar((unsigned int) n % 10 + '0');
}
