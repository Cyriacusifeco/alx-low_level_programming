#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - creates a dynamic array && fills it with constant character
 * @str: a function that returns a pointer to
 * a newly allocated space in memory,
 * which contains a copy of the string giv
 * en as a parameter.
 * Return: ptr on success
 */
char *_strdup(char *str)
{
	int i = 1;
	int len;
	char *ptr;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[i] != '\0')
	{
		i++;
	}

	len = i;


	ptr = malloc(sizeof(char) * (len + 1));

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i <= len; i++)
	{
		ptr[i] = str[i];
	}


return (ptr);
}
