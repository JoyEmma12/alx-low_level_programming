#include "main.h"

/**
  * _memset - Fills memory with a constant bytes
  * @s: memory area to fill
  * @b: constant bytes to fill
  * @n: bytes of memory area to fill
  *
  * Return: the memory area
  */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		s[x] = b;
	}
	return (s);
}
