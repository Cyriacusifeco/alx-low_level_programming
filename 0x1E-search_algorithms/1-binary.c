#include "search_algos.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
/**
 * binary_search - A function that searches for a value in an array of integers
 * using binary search algorithm.
 * @array: pointer to the first element of the array
 * @size: size of the array
 * @value: Value to be searched for
 * Return: pointer to new head of list, NULL on failure
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i = 0, j = size - 1, m = 0;
	size_t min = i, max = j;

	if (array == NULL)
		return (-1);
	while (i <= j)
	{
		m = floor((i + j) / 2);
		printf("Searching in array: %ld", min);
		while (min < max)
		{
			min++;
			printf(", %ld", min);
		}
		if (array[m] < value)
		{
			i = m + 1;
			printf("\n");
		}
		else if (array[m] > value)
		{
			j = m - 1;
			printf("\n");
		}
		else
		{
			printf("\n");
			return (m);
		}
		max = j;
		min = i;
		i++;
	}
return (-1);
}
