#include "main.h"
/**
 * _atoi - convert string to integer
 * @s: string variable
 *
 * Return: int
 */
int _atoi(char *s)
{
		int i, j, integr, sign;


		j = integr = 0;
		sign = 1;




		while ((s[j] < 48 || s[j] > 57) && (s[j] != '\0'))
		{
			if (s[j] == '-')
				sign *= -1;

			j++;
		}

		i = j;

		while ((s[i] >= 48) && (s[i] <= 57))
		{
			integr = (integr * 10) + sign * ((s[i]) - 48);
					i++;

		}


		return (integr);

}
