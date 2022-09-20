#include "main.h"
/**
 * print_most_numbers - Entry point for program
 *
 * Return: On success 1
 * On error, -1 is returned, and errno is set appropriately.
 *
 */



void print_number(int n)

{
	
	if (n >= 0 && n <= 9)
	{
		_putchar(n + '0');
	}
	
	else if (n >= 10 && n <= 99)
	{

		_putchar((n/10) + '0');
		_putchar((n % 10) + '0');
	}
	
	else if (n >= 99 && n <= 999)
	{
		_putchar((n/100) + '0');
		_putchar(n%100 + '0');
		_putchar((n % 10) + '0');
	}
	else
	{
		_putchar((n/1000) + '0'); 
		_putchar((char)n % 1000 + '0');
		_putchar((char)n % 100 + '0');
		_putchar((char)n % 10 + '0');
	}

		_putchar('\n');

}
