#include "main.h"
/**
 * print_line - Entry point for program
 * @n: Integer value of number of underscore to print
 *
 * Return: On success 1
 * On error, -1 is returned, and errno is set appropriately.
 *
 */



void print_line(int n)

{
	int c = 1;

	if (n > 0)
	{
		while (c <= n)

		{
		_putchar('_');
		c++;
		}
	}

	else
	{
		_putchar('\n');
	}
}
