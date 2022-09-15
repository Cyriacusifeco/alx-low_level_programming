#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - Entry point for program
 * Return: 0 on success
 */
int positive_or_negative(int i)
{
		

			srand(time(0));
				i = rand() - RAND_MAX / 2;
					/* your code goes there */

					if (i > 0)
					{
						printf("%d is positive\n", i);
					}
					else if (i < 0)
					{
						printf("%d is negative\n", i);
					}
					else
					{printf("%d is zero\n", i);
					}
					return (0);
}




int main(void)
{
	        int i;

		        i = 0;
			        positive_or_negative(i);

				        return (0);
}
