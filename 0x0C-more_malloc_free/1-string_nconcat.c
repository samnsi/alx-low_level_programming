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
	unsigned int i = 0, j = 0, k = 0, l = 0;
	char *s;

	if (s1 == NULL)
	s1 = "";
	if (s2 == NULL)
	s2 = "";

	while (s1[i])
	i++;

	while (s2[k])
	k++;

	if (n >= k)
	l = i + k;
	else
	l = i + n;

	s = malloc(sizeof(char) * l + 1);
	if (s == NULL)
	return (NULL);

	k = 0;
	while (j < l)
	{
	if (j <= i)
	s[j] = s1[j];

	if (j >= i)

	{
	s[j] = s2[k];
	k++;
	}
	j++;
	}
	s[j] = '\0';
	return (s);
}
