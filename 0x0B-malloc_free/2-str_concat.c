#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * str_concat - concatenates two string
  * @s1: first string to concatenate
  * @s2: second string to concatenate
  *
  * Return: the two concatenated string
  */
char *str_concat(char *s1, char *s2)
{
	int a = 0, b = 0, c = 0, d = 0;
	char *x;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[a])
		a++;

	while (s2[b])
		b++;

	d = a + b;
	x = malloc((d * sizeof(char)) + 1);

	if (x == NULL)
		return (NULL);

	b = 0;

	while (c < d)
	{
		if (c <= a)
			x[c] = s1[c];

		if (c >= a)
		{
			x[c] = s2[b];
			b++;
		}
		a++;
	}
	x[c] = '\0';
	return (x);
}
