#include "main.h"

/**
 * largest_numbers - return 3 largest numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */
int largest_number(int a, int b, int c)
{
int largest;

if ((a >= b) && (a >= c))
{
largest = a;
}
else if ((b >= c) && (b >= a))
{
largest = b;
}
else
{
largest = c;
}
return (largest);
}
