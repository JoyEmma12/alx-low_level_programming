#include "main.h"

/**
  * _isupper - Checks for uppercase letter
  * @x: The number to be checked
  *
  * Return: 1 for uppercase letter or 0 for otherwise
  */
int _isupper(int x)
{
	if  (x >= 65 && x <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
