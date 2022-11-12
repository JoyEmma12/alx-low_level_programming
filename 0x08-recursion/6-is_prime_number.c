#include "main.h"

/**
  * is_prime_number - returns a prime number
  * @n: the number to be checked
  *
  * Return: integer value
  */
int is_prime_number(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (is_prime_number(n - 1));
}
