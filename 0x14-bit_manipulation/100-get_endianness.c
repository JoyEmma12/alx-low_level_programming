#include <stdio.h>
#include "main.h"

/**
  * get_endianness - check the endianness
  *
  * Return: if big-endian is zero, or little endian is 1
  */
int get_endianness(void)
{
	int num = 1;
	char *endian = (char *)&num;

	if (*endian == 1)
		return (1);

	return (0);
}
