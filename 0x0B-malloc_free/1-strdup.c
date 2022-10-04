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
	int i;
	int len;
	char *ptr;

	if (*str == '\0')
	{
		return (NULL);
	}

	while (str[i] != '\0')
	{
		i++;
	}

	len = i;

	ptr = malloc(sizeof(char) * len);

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
