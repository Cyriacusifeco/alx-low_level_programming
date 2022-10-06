#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - a function that concatenates two strings..
 * @s1: destination string
 * @s2: source string
 * @n: maximum number of bytes to be filled by s2.
 * Return: pointer to memory on success.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i = 0, strlen = 0, c = 0;
	unsigned int j = 0;
	unsigned int s2_len;
	char *ptr;

	if (s1 == NULL)
		s1 = "";

	else if (s2 == NULL)
		s2 = "";

	while (s1[i] != '\0')

		i++;
	while (s2[j] != '\0')

		j++;
	s2_len = j;
	strlen = (i + n);

	ptr = malloc(sizeof(char) * (strlen + 1));

	if (ptr == NULL)
		return (NULL);

	for (; c < i; c++)
		ptr[c] = s1[c];

	for (j = 0; j < n && j < s2_len; j++)
	{
		ptr[c + j] = s2[j];
	}
	ptr[c + j] = '\0';

	if (ptr == NULL)
		return (NULL);
	else
		return (ptr);
}
