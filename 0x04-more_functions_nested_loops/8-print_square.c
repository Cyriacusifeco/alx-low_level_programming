#include "main.h"
/**
 * print_square - Entry point for program
 * @size: Determines the size and height of square
 *
 * Return: On success 1
 * On error, -1 is returned, and errno is set appropriately.
 *
 */



void print_square(int size)

{
	int c = size;
	int i = size;
	int a = size;

	if (c > 0)
	{
	for (c = 1; c <= a; c++)

	{
		for (i = 1; i <= a; i++)
		{
			_putchar(35);
		}




		_putchar('\n');
	}

	}

	else
	{
		_putchar('\n');
	}
}
