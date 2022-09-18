#include "main.h"
/**
 * more_numbers - Entry point for program
 *
 * Return: On success 1
 * On error, -1 is returned, and errno is set appropriately.
 *
 */



void more_numbers(void)

{
	int c;
	int i;

	for (c = 0; c <= 9; c++)

	{
		for (i = 0; i <= 14; i++)
		{
			if (i < 10)
			{
			_putchar(i + '0');
			}
			else
			{
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
			}
		}


		_putchar('\n');
	}

}
