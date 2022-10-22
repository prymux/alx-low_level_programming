#include "main.h"
/**
 * _isdigit - checks if char is a digitt
 * @c: int to be checked
 * Return: 1 if c is a digit otherwise 0
 */
int _isdigit(int c)
{
	int y = 0;

	if (c >= '0' && c <= '9')
		y = 1;

	return (y);
}
