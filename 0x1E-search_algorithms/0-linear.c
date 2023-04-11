#include "search_algos.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * linear_search - A function that searches for a value in an array of integers
 * using linear search algorithm.
 * @array: pointer to the first element of the array
 * @size: size of the array
 * @value: Value to be sought for
 * Return: pointer to new head of list, NULL on failure
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;


	if (!(value) || array == NULL)
	{
		return (-1);
	}

	while (i < size)
	{

		printf("Value checked array[%ld] = [%d]\n", i, array[i]);

		if (array[i] == value)
		{
			return (i);
		}

		i++;
	}


return (-1);
}
