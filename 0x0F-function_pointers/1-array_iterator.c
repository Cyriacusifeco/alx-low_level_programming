#include <stdio.h>
#include <stdlib.h>
/**
 * array_iterator - a function that exexcutes another function with array elements.
 * @array: pointer to array to be iterated
 * @action: function pointer to function to be executed
 * Return: nothing on success.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)

		action(array[i]);




return;
}
