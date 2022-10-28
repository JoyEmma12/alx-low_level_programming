#include "main.h"

/**
  * _isdigit - Check for digit
  * @c: The number to be checked
  *
  * Return: 1 for digit or 0 otherwise
  */
int _isdigit(int c)
{
	if (c >= 50 && c <= 59)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
