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

int _islower(int c)
{

	if (c >= 97 && c <= 122)
	{
		return (1);
	}

	else
	{	return (0);
	}
		_putchar('\n');

}
