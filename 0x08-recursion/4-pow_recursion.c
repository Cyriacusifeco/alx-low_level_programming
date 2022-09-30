#include "main.h"
/* more headers goes there */

/**
 * _pow_recursion - Returns the power of an int
 * @x: Base
 * @y: Exponent
 * Return: Always 1 on success
 */
int _pow_recursion(int x, int y)
{
	int pow;

	if (y < 0)
	{
		return (-1);
	}

	else if (y == 0)
	{
		return (1);
	}

	else
	{
		pow = _pow_recursion(x, y - 1);
	}


return (x * pow);
}
