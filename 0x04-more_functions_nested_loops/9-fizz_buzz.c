#include "main.h"
#include <stdio.h>

/**
  * main - Prints fizzbuzz program
  *
  * Return: Always 0 (success)
  */
int main(void)
{
	int x;

	for (x = 0; x <= 100; x++)
	{
		if (x % 3 == 0)
		{
			printf("Fizz");
		}
		else if (x % 5 == 0)
		{
			printf("Buzz");
		}
		else if ((x % 3 == 0) || (x % 5 == 0))
		{
			printf("FizzBuzz");
		}
		else
		{
			printf("%d", x);
		}
		if (x != 100)
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
