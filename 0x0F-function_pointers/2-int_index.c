#include "function_pointers.h"

/**
  * int_index - searches for an integer
  * @size: the number of element in the array
  * @cmp: pointer to a function
  * @array: the array of the element
  *
  * Return: index of first element
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (i < size)
			{
				if (cmp(array[i]))
					return (i);

				i++;
			}
		}
	}
	return (-1);
}
