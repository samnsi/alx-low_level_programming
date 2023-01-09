#include "main.h"

/**
 * create_array - arrays to print a string
 * @size: number element array
 * @c: char
 *
 * Return: pointer
 */

char *create_array(unsigned int size, char c)
{
	char *buffer;
	unsigned int position;

	if (size == 0)
	{
	return (0);
	}

/*Define value with malloc*/
buffer = (char *) malloc(size * sizeof(c));

	if (buffer == 0)
	{
	return (0);
	}
	else
	{
	position = 0;
	}
	while
	{(position < size) /*while for array*/
	*(buffer + position) = c;
	position++
	}

	return (buffer);
}
