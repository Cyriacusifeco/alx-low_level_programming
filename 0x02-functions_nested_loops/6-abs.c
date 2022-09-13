#include "main.h"
/**
 * print_alphabet - Entry point for program
 *
 * Return: On success 1
 * On error, -1 is returned, and errno is set appropriately.
 *
 */


void print_alphabet(void)

{ int c;

	for (c = 'a'; c <= 'z'; c++)

	{	_putchar(c);
	}
		_putchar('\n');
}
