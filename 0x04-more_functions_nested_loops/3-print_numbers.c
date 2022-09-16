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

	while (c >= 0 && c <= 9)
	{
		_putchar (c);
		c++;
	}


		_putchar('\n');

}
