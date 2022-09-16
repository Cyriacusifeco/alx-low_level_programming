#include "main.h"
/**
 * print_most_numbers - Entry point for program
 *
 * Return: On success 1
 * On error, -1 is returned, and errno is set appropriately.
 *
 */



void print_most_numbers(void)

{
	int c;

	for (c = 0; c <= 9; c++)

	{
		if (c == 2 || c == 4)

		{	continue;
		}

		_putchar (c + '0');

	}


		_putchar('\n');

}
