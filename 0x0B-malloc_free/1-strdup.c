#include "main.h"
#include <stdlib.h>

/**
  * _strdup - copy the string
  * @str:  duplicates of the string
  *
  * Return: the copy of the string
  */
char *_strdup(char *str)
{
	char *x;
	int y = 0, z = 1;

	if (str == NULL)
		return (NULL);

	while (str[z])
	{
		z++;
	}

	x = malloc((z * sizeof(char)) + 1);

	if (x == NULL)
		return (NULL);

	while (y < z)
	{
		x[y] = str[y];
		y++;
	}


	x[y] = '\0';
	return (x);
}
