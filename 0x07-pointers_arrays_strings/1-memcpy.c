#include "main.h"

/**
  * _memcpy - copy memory area
  * @dest: dest memory area
  * @src: src memory area
  * @n: bytes from memory area
  *
  * Return: memory area
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		dest[x] = src[x];
	}
	return (dest);
}
