#include "putchar.h"

/**
 * main - Entry point
 *
 * Return: return 0 (success)
 */
int main(void)
{
char *sh = "_putchar";

while (*sh)
{
_putchar(*sh);
sh++;
}
_putchar('\n');


return (0);
}
