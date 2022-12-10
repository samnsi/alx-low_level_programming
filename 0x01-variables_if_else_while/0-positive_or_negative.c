#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - initiating betty
 *
 * Description: main
 *
 * Return: always 0 (sucess)
 *
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is sero\n", n);
	else
		printf("%d is negative\n", n);
	return (0);
}
