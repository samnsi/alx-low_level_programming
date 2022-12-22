#include "main.h"
#include <stdio.h>

/**
 * print_number - print an integer.
 * @n: integer to be printed.
 */

void print_number(long n)
{
	if (n < 0)

	{
	putchar('-');
	n = -n;
	}
	if (n / 10)
	print(n / 10);
	putchar(n % 10 + '0');
}
