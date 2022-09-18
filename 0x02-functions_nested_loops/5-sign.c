#include "main.h"
/**
 * print_sign - Entry point for program
 * @n: The character to print
 *
 * Return: On success 1
 * On error, -1 is returned, and errno is set appropriately.
 *
 */


/**
 * @n: The character to print
 */

int print_sign(int n)
{

	if (n > 0)
	{
		_putchar(43);
		return (1);
	}

	else if (n == 0)

	{
		_putchar(48);
		return (0);
	}

	else
	{	_putchar(45);
	}



		return (-1);


}
