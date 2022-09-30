#include "main.h"
/* more headers goes there */

/**
 * _strpbrk - searches a string for any of set of bytes
 * @accept: instance of bytes to be found
 * @s: string to be searched
 *
 * Return: pointer to bytes found
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int j = 0;
	int c = 0;

	for (; accept[j] != '\0'; j++)
	{
		while (s[i] != accept[j])
		{
			i++;
		}
		if (s[i] == accept[j])
		{
			if (c == 0)
			{
				c = i;
			}
			else if (i < c)
			{
				c = i;
			}
		}


		i = 0;
	}

	return (s + c);
}
