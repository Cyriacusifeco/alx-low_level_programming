#include <stdio.h>
/**
 * main - Entry point of program
 * Return: 0
 */
int main(void)

{
	int c;

	for (c = 48; c <= 57; c++)

	{
		putchar(c);

		if (c < 57)
		{
			putchar(44);

			putchar(' ');
		}
	}

		putchar(10);










return (0);
}
