#include "main.h"
/* more headers goes there */

/**
 * _strlen_recursion - Prints string lenght
 * @s: poniter to string to print
 * Return: Pointer from memory area s
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (s[i] == '\0')
	{
		return (0);
	}

	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
