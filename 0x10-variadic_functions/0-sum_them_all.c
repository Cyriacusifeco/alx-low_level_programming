#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all - a function that adds arguments
 * @n: number of arguments
 * Return: sum on success.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;

	va_list list;

	va_start(list, n);

	for (i = 1; i <= n; i++)
	{
		sum += va_arg(list, int);
	}

	va_end(list);



return (sum);
}
