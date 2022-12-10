#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase.
 *
 * Description: main
 *
 * Return: Always 0 (Sucess)
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);
	putchar('\n');
	return (0);
}
