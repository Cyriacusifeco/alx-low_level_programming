#include "main.h"
/**
 * print_alphabet_x10 - Entry point of program
 * print_alphabet - Entry point for program
 *
 * Description: This program prints lowercase letter 10 times
 * Return: No return value is expected
 *
 */

void print_alphabet(void);

void print_alphabet_x10(void)
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
/**
 * print_alphabet - Entry point for called function
 *
 * return is void
 */

void print_alphabet(void)

{	int c;

	for (c = 'a'; c <= 'z'; c++)

	{   _putchar(c);
	}

		_putchar('\n');

}
