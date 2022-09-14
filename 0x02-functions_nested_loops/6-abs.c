#include "main.h"
/**
 * _abs - Entry point for program
 * @c: The character return type
 *
 * Return: On success 1
 * On error, -1 is returned, and errno is set appropriately.
 *
 */


int _abs(int c)

{
	int a;

	if (c < 0)

	{	a = c * (-1);

		return (a);
	}

	else

		return (c);

}
