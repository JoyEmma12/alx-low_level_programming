#include "main.h"
#include <stdlib.h>

/**
  * create_array - array of chars, and initailizes it with a specific char
  * @size: the size of the array
  * @c: the chaar of array to be filled
  *
  * Return: The array filled
  */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	if (size == 0)
	{
		return (NULL);
	}
	s = malloc(sizeof(char) * size);

	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}
	return (s);
}
