#include "main.h"
#include <stdio.h>

/**
  * _strcat - Concatenates two string
  * @dest: The destination string
  * @src: The source string
  *
  * Return: A pointer to the resulting string dest
  */
char *_strcat(char *dest, char *src)
{
	int alen = 0, i;

	while (dest[alen])
	{
		alen++;
	}
	for (i = 0; src[i] != 0; i++)
	{
		dest[alen] = src[i];
		alen++;
	}
	dest[alen] = '\0';
	return (dest);
}
