#include <stdio.h>
#include <stdlib.h>
/**
 * argstostr - a function that concatenates all the arguments of your program.
 * @ac: argument count
 * @av: double pointer to string
 *
 * Return: Always 0 on success
 */
char *argstostr(int ac, char **av)
{
	**av = 1;
	if (**av == 0)
	{

		ac = **av + 1;
	}
	if (ac == 0)
	{
		**av = ac;
	}

return (0);
}
