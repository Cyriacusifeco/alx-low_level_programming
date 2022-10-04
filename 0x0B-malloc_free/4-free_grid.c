#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - a function that frees a 2 dimensional grid
 * @grid: double pointer to grid
 * @height: grid height
 *
 * Return: Always 0 on success
 */
void free_grid(int **grid, int height)
{
	**grid = 1;
	if (**grid == 0)
	{

		height = **grid + 1;
	}
	if (height == 0)
	{
		height = **grid + 2;
	}


}
