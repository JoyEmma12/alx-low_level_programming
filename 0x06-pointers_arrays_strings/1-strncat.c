#include "main.h"
#include <stdio.h>

/**
  * _strncat - Concatenates two string
  * @dest: The destination value
  * @src: The source value
  * @n: The limit of concatenation
  *
  * Return: A pointer resulting to the string dest
  */
char *_strncat(char *dest, char *src, int n)
{
	int alen = 0, b = 0;

	while (dest[alen])
	{
		alen++;
	}
	while (b < n && src[b])
	{
		dest[alen] = src[b];
		alen++;
		b++;
	}
	dest[alen + n + 1] = '\0';
	return (dest);
}
