#ifndef _HEADER_
#define _HEADER_
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
int _putchar(char c);
/**
  * struct format_types - Struct format_types
  * @identifier: The conversion specifier
  * @f: The function pointer
  */
typedef struct format_types
{
	char *identifier;
	void (*f)(char *seperator, va_list args);
} f_dt;
#endif
