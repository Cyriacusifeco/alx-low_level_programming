#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - prints all arguments
 * @separator: separates argument list
 * @n: number of arguments
 * Return: noothing on success.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int num;

	va_list list;

	va_start(list, n);

	for (i = 1; i <= n; i++)
	{
		num = va_arg(list, int);

		printf("%d", num);

		if (separator == NULL || n == 0)
		{
			continue;
		}

		else if (i != n)

		printf("%s ", separator);
	}

	va_end(list);
	putchar('\n');



return;
}
