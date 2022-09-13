#include "main.h"
/**
 * main - Entry point of program
 * print_alphabet - Entry point for program.
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

void print_alphabet(void)

{ 		int c;

	        for (c = 'a'; c <= 'z'; c++)

		{       _putchar(c);
		}
		       _putchar('\n');

}
