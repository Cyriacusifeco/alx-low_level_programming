#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - prints all arguments strings.
 * @separator: separates string list
 * @n: number of arguments
 * Return: noothing on success.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;

	va_list list;

	va_start(list, n);

	for (i = 1; i <= n; i++)
	{
		str = va_arg(list, char *);

		if (str != NULL)
		{
			printf("%s", str);
		}

		else
			printf("(nil)");

		if (separator == NULL)
		{
			continue;
		}

		else if (i != n)

		printf("%s", separator);
	}

	va_end(list);
	putchar('\n');



return;
}
