#include "main.h"

/**
 * main - storing the address of variable into a pointer
 *
 * Return: Always (0)
 */

int main(void)
{
	int n;
	int *p;

	n = 98;
	p = &n;
	_putchar("Address of 'n': %ls\n", &n);
	_putchar("Value of 'p': %ls\n", p);
	return (0);
}
