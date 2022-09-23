#include "main.h"
/**
 * reverse_array - reverses array
 * @a: Destination string
 * @n: Number of elements in the array
 *
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int l = 0;
	int tmp;

	while (l < n)
	{
		l++;
	}

	for (i = 0; i < l / 2; i++)
	{
		tmp = a[i];
		a[i] = a[l - i - 1];
		a[l - i - 1] = tmp;
	}

}
