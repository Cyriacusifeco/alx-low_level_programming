#include "main.h"
/**
 * _isalpha - Entry point for program
 * @c: The character to print
 *
 * Return: On success 1
 * On error, -1 is returned, and errno is set appropriately.
 *
 */


/**
 * @c: The character to print
 */

int print_sign(int n)
{

	if (n > 0)
	{
		return (1);
		_putchar(+);
	}

	else if (n == 0)

	{	return (0);
		_putchar(0);
	}

	else
	{	return (-1);
	}



		_putchar(-);


}
