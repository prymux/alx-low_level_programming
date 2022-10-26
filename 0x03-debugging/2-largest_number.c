#include "main.h"
/**
 * largest number - return the largest number
 * @a: the first integer
 * @b: the second integer
 * @c: the third integer
 * Return: largest number
 */
int largest number(int a, int b, int c)
{
	int largest;

	if (a > b)
	{
		if (b > c)
			largest = a;
		else if (a > c)
			largest = a;
		else
			largest = c;

	}
	else
	{
		if (b < c)
			largest = c;
		else
			largest = b

	}
	return (largest);

}
