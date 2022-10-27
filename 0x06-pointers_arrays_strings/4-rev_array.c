#include "main.h"
#include <stdio.h>

/**
  * reverse_array - Reverse the contents of an array
  * @a: An array of integers
  * @n: Number of elements to swap
  *
  * Return: empty
  */
void reverse_array(int *a, int n)
{
	int *x, i, aux, y;

	x =  a;

	for (i = 1; i < n; i++)
	{
		x++;
	}

	for (y = 0; y < i / 2; y++)
	{
		aux = a[y];
		a[y] = *x;
		*x = aux;
		x--;
	}
}
