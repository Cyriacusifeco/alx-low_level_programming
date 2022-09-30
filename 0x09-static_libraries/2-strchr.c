#include "main.h"
/* more headers goes there */

/**
 * _strchr - copies memory area
 * @c: instance of character to be found
 * @s: source string
 *
 * Return: Pointer to memory area s
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
		return (s + i);
		}

		i++;
	}

	return (NULL);
}
