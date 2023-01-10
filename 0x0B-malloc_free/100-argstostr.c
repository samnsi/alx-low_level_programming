#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - is a function that concatenates all the arguments of a program into a string
 * argument should be followed by a new line in the string.
 * @ac: The number of argument passed to the arguments.
 * @av: An aray of pointers to the arguments.
 *
 * Return: if ac == 0 or av == NULL, or the function fails -NuLL
 * otherwise - a pointer to the new string.
 */

char *argstostr(int ac, char **av)
{
	char *str;
	int arg, byte, index, size = ac;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (arg = 0; arg < ac; arg++)
	{
		for (byte = 0;  av[arg][byte]; byte++)
			size++;
	}
	str = malloc(sizeof(char) * size + 1);

	if (str == NULL)
	return (NULL);

	index = 0;

	for (arg = 0; arg < ac; arg++)
	{
	for (byte = 0; av[arg][byte]; byte++)
	str[index++] = av[arg][byte];

	str[index++] = '\n';
	}

	str[size] = '\0';

	return (str);
}
