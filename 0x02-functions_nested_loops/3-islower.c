#include "main.h"
/**
 * print_alphabet - Entry point for program
 *
 * Return: On success 1
 * On error, -1 is returned, and errno is set appropriately.
 *
 */



int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
	{
		_putchar (49);
	}

	else 
	{	_putchar (48);
	}
		_putchar('\n');
return (0);
}
