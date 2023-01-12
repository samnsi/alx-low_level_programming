#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - function concatinate 2 strings
 * @s1: string1
 * @s2: string2
 * @n: unsigned int
 *
 *Return: char
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, k, l;
	char *s;

	if (s1 == 0)
		i = 0;
	else
	{
		for (i = 0; s1[i]; i++)
			;
	}
	if (s2 == 0)
		k = 0;
	else
	{
		for (k = 0; s2[k]; k++)
			;
	}
	if (n >= k)
		l = i + k;
	else
		l = i + n;
	s = malloc(sizeof(char) * l + 1);
	if (s == NULL)
		return (NULL);
	for (k = 0; j <= i; k++)
		s[j] = s1[j];
	for (k = 0; j >= i; j++)
		s[j] = s2[k];
	s[j] = '\0';
	return (s);
}
