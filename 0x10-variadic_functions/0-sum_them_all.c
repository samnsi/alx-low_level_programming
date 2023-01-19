#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sum code in program
 * @n: argument number
 *
 * Return: 0.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list one;
	int sum = 0;
	unsigned int q;

	va_start(one, n);

	for (q = 0; q < n; q++)
	{
		sum += va_arg(one, int);
	}
	va_end(one);

	return (sum);
}
