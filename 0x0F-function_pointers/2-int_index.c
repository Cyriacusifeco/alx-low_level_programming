#include <stdio.h>
#include <stdlib.h>
/**
 * int_index - a function that searches for an integer
 * @array: pointer to array to be iterated
 * @size: array size
 * @cmp: function pointer to function to be execute
 * Return: integer on success.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	int s;

	if (array == NULL || cmp == NULL)
		return;

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{

		s = cmp(array[i]);

		if (s != 0)
		{
			return (i);
		}
	}




return (-1);
}
