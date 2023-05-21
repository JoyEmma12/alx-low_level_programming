#include "search_algos.h"

/**
  * linear_search - searches for a value in an array of integers
  * @array: a pointer to the first element of the array
  * @size: number of the element in array
  * @value: value to search
  *
  * Return: NULL if the value is not present
  */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
