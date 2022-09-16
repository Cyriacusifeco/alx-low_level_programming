#include "main.h"
/**
 * print_most_numbers - Entry point for program
 *
 * Return: On success 1
 * On error, -1 is returned, and errno is set appropriately.
 *
 */



void print_diagonal(int n)

{
	int c = 92;

	while (n--)

	{
		if (n <= 0)

		{	_putchar('\n');
		}

		_putchar (c);
		_putchar ('\t');

	}




}
