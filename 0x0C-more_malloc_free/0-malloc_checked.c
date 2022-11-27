#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * malloc_checked - Allocates memeory
  * @b: the sizr to allocate
  *
  * Return: Nothing
  */
void *malloc_checked(unsigned int b)
{
	void *a;

	a = malloc(b);

	if (a == NULL)
		exit(98);

	return (a);
}
