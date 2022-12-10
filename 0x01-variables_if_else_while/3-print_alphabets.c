#include <stdio.h>

/*
 *
 * main - Entry point
 *
 * Prints the alphabet in lowercase, and the in upercase
 *
 * Return: Always 0 (Sucess)
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);
	for (letter = 'A'; letter <= 'Z'; letter++)
		putchar(letter);
	putchar('\n');
	return (0);
}
