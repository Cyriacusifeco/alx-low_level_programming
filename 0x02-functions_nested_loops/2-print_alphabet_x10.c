#include "main.h"
/**
 * main - Entry point of program
 * print_alphabet - Entry point for program.
 *
 * Return: On success 1
 * On error, -1 is returned, and errno is set appropriately.
 *
 */

void print_alphabet(void);

int main(void)
{

		print_alphabet();
		print_alphabet();
		print_alphabet();
		print_alphabet();
		print_alphabet();
		print_alphabet();
		print_alphabet();
		print_alphabet();
		print_alphabet();
		print_alphabet();
}

void print_alphabet(void)

{ int c;

	        for (c = 'a'; c <= 'z'; c++)

		{       _putchar(c);
		}
		       _putchar('\n');

}
