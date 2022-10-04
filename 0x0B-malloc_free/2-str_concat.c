#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - a function that concatenates two strings
 * @s1: destination string
 * @s2: source string
 *
 * Return: ptr on success
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0;
	int j = 0;
	int c;
	int strlen;
	char *ptr;

	while (s1[i] != '\0')
	{
		i++;
	}

	while (s2[j] != '\0')
	{
		j++;
	}

	strlen = (i + j) - 1;

	ptr = malloc(sizeof(char) * strlen);

	for (j = 0; s2[j] <= '\0'; j++)
	{
		s1[i] = s2[j];
		i++;


	}

	for (c = 0; c <= strlen; c++)
	{
		ptr[c] = s1[c];
	}



return (ptr);
}
