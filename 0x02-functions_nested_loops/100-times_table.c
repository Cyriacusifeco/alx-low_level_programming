#include "main.h"
#include <stdio.h>
/**
 * print_times_table - Entry point for program
 * @n: The character parameter
 * Return: On success 1
 * On error, -1 is returned, and errno is set appropriately.
 *
 */

void print_times_table(int n)

{
	int i;
	int j;
	int a;

	for (i = 0; i <= n; i++)


	{	if (n > 15 || n < 0)

		{       break;

		}

		for (j = 0; j <= n; j++)

		{ a = (i * j);

			if (j == n)
			{ printf("%d\t", a);
			}
			else
			{
			printf("%d, \t", a);
			}
		}

		j = 0;

		printf("\n");

	}


}
