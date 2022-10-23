#include <stdio.h>

/**
 * main - prints the first 50 fibonacci numbers
 *
 * Return: Nothing
 */
int main(void)
{
int i = 0;
long j = 1, l = 2;

while (i < 50)
{
if (i == 0)
{
printf("%ld", j);
}
else if (i == 1)
{
printf("%ld", l);
}
else
{
l += j;
j = l - j;
printf(", %ld", l);
}
++i;
}
printf("\n");
return (0);
}
