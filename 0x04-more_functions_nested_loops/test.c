#include "main.h"
#include <stdio.h>
/**
 * _isdigit - Entry point for program
 * @c: The character to print
 *
 * Return: On success 1
 * On error, -1 is returned, and errno is set appropriately.
 *
 */


/**
 * @c: The character to print
 */

int _isdigit(int c)
{

	if (c >= 48 && c <= 57)
	{
		return (1);
	}

	else
	{	return (0);
	}
		_putchar('\n');

}
int main(void)
{
	    char c;

	        c = '0';
		    printf("%c: %d\n", c, _isdigit(c));
		        c = 'a';
			    printf("%c: %d\n", c, _isdigit(c));
			        return (0);
}
