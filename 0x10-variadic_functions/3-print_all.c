#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_all - prints any arguments.
 * @format: A list of all possible types passed.
 * Return: noothing on success.
 */


void print_all(const char * const format, ...)
{
	struct format;
	unsigned int i;
	char *str;

	va_list list;

	va_start(list, format);

	for (i = 1; i <= 100; i++)
	{
		str = va_arg(list, char *);

		if (str != NULL)
		{
			printf("%s", str);
		}

		else
			printf("(nil)");


	}

	va_end(list);
	putchar('\n');



return;
}
