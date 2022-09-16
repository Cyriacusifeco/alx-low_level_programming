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

	while (c >= 48 && c <= 57)
	{
		_putchar (c+'0');
		c++;
	}


		_putchar('\n');

}
