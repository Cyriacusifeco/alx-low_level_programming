#include "main.h"
/* more headers goes there */

/**
 * _strspn - Gets the lenght of a prefix substring
 * @accept: instance of string to be found
 * @s: destination string
 *
 * Return: number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	int j = 0;
	unsigned int c = 0;

	for (; accept[j] != '\0'; j++)
	{
		while (s[i] != accept[j])
		{
			i++;
		}
		if (s[i] == accept[j])
		{
			if (i > c)
			{
				c = i;
			}
		}


		i = 0;
	}

	return (c + 1);
}
