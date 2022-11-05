#include "main.h"
#include <stdio.h>

/**
  * print_diagsums - print the sum of two diagonal of a square matrix integer
  *
  * @a: the matrix
  * @size: the size
  *
  * Return: Nothing
  */
void print_diagsums(int *a, int size)
{
	int x, sum1 = 0, sum2 = 0;

	for (x = 0; x < size; x++)
	{
		sum1 += a[(size + 1) * x];
		sum2 += a[(size - 1) * (x + 1)];
	}
	printf("%d, %d\n", sum1, sum2);
}
