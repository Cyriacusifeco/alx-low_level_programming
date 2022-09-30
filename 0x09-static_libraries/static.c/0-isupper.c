#include "main.h"
/**
 * _isupper - Entry point for program
 * @c: The character to print
 *
 * Return: On success 1
 * On error, -1 is returned, and errno is set appropriately.
 *
 */


/**
 * @c: The character to print
 */

int _isupper(int c)
{

	if (c >= 65 && c <= 90)
	{
		return (1);
	}

	else
	{	return (0);
	}
		_putchar('\n');

}
