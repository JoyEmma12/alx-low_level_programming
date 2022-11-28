#include "main.h"
#include <stdlib.h>

/**
  * _calloc - allocates memeory for an array
  * @nmemb: number of members
  * @size: size
  *
  * Return: the allocated memory
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i = 0, a = 0;
	char *b;

	if (nmemb == 0 || size == 0)
		return (NULL);

	a = nmemb * size;
	b = malloc(a);

	if (b == NULL)
		return (NULL);

	while (i < b)
	{
		b[i] = 0;
		i++;
	}

	return (b);
}
