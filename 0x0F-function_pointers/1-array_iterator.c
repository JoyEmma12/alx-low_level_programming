#include "function_pointers.h"

/**
  * array_iterator - function of a given parameter on each element of an array
  * @size: the size of an array
  * @action: pointer to the function
  * @array: the array of an element
  *
  * Return: Nothing
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array != NULL && action != NULL && size > 0)
	{
		if (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
