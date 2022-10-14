#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_all - prints any arguments.
 * @format: A list of all possible types passed.
 * Return: noothing on success.
 */


void print_all(const char * const format, ...)
{
	int len;
	int j = 0;
	char i = 'i';
	char c = 'c';
	float f = 'f';
	char *s;


	va_list list;

	va_start(list, format);

	len = strlen(format);

	while (j < len)
	{
		if (format[j] == c)
		{
			char st = va_arg(list, int);
			printf("%c", st);
		}

		else if (format[j] == i)
		{
			int st = va_arg(list, int);
			printf("%d", st);		}

		else if (format[j] == f)
		{
			float st = va_arg(list, double);
			printf("%f", st);
		}

		else if (format[j] == *s)
		{
			s = va_arg(list, char *);
			printf("%s", s);
		}

		if (format[j] != 'c' || format[j] != 'i' || format[j] != 'f' || format[j] != 's')
		{
			continue;
		}

		j++;


	}

	va_end(list);
	putchar('\n');



return;
}
