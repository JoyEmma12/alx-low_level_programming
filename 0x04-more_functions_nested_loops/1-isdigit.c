#include "main.h"

/**
  * _isdigit - Check for digit
  * @c: The number to be checked
  *
  * Return: 1 for digit or 0 otherwise
  */
int _isdigit(int c)
{
	if (c >= 49 && c <= 58)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
