#include "main.h"
/**
 * main - Entry point of program
 * print_alphabet - Entry point for program.
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
return(0);
}

void print_alphabet(void)

{ 		int c;

	        for (c = 'a'; c <= 'z'; c++)

		{       _putchar(c);
		}
		       _putchar('\n');

}
