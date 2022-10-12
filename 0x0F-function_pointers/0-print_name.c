#include <stdio.h>
#include <stdlib.h>
/**
 * print_name - a function to print name.
 * @name: The name to be printed
 * @f: function pointer to function to be executed
 * Return: nothing on success.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);




return;
}
