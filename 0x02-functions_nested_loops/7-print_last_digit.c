#include "main.h"
/**
 * _islower - Entry point for program
 * @c: The character to print
 *
 * Return: On success 1
 * On error, -1 is returned, and errno is set appropriately.
 *
 */


/**
 * @c: The character to print
 */

int print_last_digit(int c)
{

	int l = ((c % 10));
	
	if (l < 0)
	{ l = l*(-1);
	  _putchar('0' + l);
	return (l);
	
	_putchar('\n');
	}
return (0);
}
