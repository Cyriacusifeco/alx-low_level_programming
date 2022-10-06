#include <stdio.h>
#include <stdlib.h>
/**
 * array_range -  a function that creates an array of integers.
 * @min: minimum value of array elements.
 * @max: maximum value of array element.
 * Return: pointer to array on success.
 */
int *array_range(int min, int max)
{
	int count = 0;
	int i;
	int store_min = min;
	int *ptr;

	if (min > max)

		return (NULL);

	while (min <= max)
	{
		count++;
		min++;
	}

	min = store_min;

	ptr = malloc(sizeof(int) * count);

	if (ptr == NULL)
	{

		return (NULL);
	}

	for (i = 0; i < count; i++)
	{
		ptr[i] = min;

		min++;
	}


return (ptr);

}
