#include "main.h"
/**
 * print_numbers - Entry point for program
 *
 * Return: On success 1
 * On error, -1 is returned, and errno is set appropriately.
 *
 */



void print_numbers(void)
{
	int c;

	c = 48;

	while (c >= 48 && c <= 57)
	{
		_putchar (c);
		c++;
	}


		_putchar('\n');

}
