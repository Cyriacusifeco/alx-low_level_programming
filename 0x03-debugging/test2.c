#include "main.h"

/**
 *  * largest_number - returns the largest of 3 numbers
 *   * @a: first integer
 *    * @b: second integer
 *     * @c: third integer
 *      * Return: largest number
 *       *
 */

int largest_number(int a, int b, int c)
{
	        int largest;

		        if (a > b && a > c)
				        {
						                largest = a;
								        }
			        else if (b > a && b > c)
					        {
							                largest = b;
									        }
				        else if (c > a && c > b)
						        {
								                largest = c;
										        }
					        else if (a == b)
							        {
									                largest = a, b;
											        }
						        else if (b == c)
								        {
										                largest = b, c;
												        }
							        else if (a == c)
									        {
											                largest = a, c;
													        }
								        else
										        {
												                largest = a, b, c;
														        }

									        return (largest);
}

int main(void)
{
	        int a, b, c;
		        int largest;

			        a = 98;
				        b = 98;
					        c = 100;

						        largest = largest_number(a, b, c);

							        printf("%d is the largest number\n", largest);

								        return (0);
}
