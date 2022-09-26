#include "main.h"
/**
 *cap_string - Increase to uppercase
 *@s: string param
 *Return: capitalized string
 */
char *cap_string(char *s)
{
	char arr[] = {32, 9, '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};
	int len = 13;
	int j = 0, i;

	while (s[j])
	{
		i = 0;
		while (i < len)
		{
			if ((j == 0 || s[j - 1] == arr[i]) && (s[j] >= 97 && s[j] <= 122))
			s[j] = s[j] - 32;
				i++;
		}
				j++;
	}
		return (s);
}
