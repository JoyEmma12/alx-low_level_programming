#include "main.h"

/**
  * _sqrt_recursion - returns natural square root of a number
  * @n: the value to be squared
  *
  * Return: the value squared
  */
int _sqrt_recursion(int n)
{
	if (n != 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * _sqrt_recursion(n - 1));
}
