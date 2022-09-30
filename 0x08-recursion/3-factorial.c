#include "main.h"
/* more headers goes there */

/**
 * factorial - Prints the factorial of an int
 * @n: int variable
 * Return: Always 1 on success
 */
int factorial(int n)
{
	int fact;

	if (n < 0)
	{
		return (-1);
	}

	else if (n == 0)
	{
		return (1);
	}

	else

	{

		fact = factorial(n - 1);
	}

return (n * fact);
}
