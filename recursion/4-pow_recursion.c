#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: the base value
 * @y: the exponent
 *
 * Return: the value of x^y, or -1 if y is negative
 */
int _pow_recursion(int x, int y)
{
	/* Error Case: If the exponent is negative, return -1 */
	if (y < 0)
	{
		return (-1);
	}

	/* Base Case: Any number to the power of 0 is 1 */
	if (y == 0)
	{
		return (1);
	}

	/* Recursive Step: x^y = x * x^(y-1) */
	return (x * _pow_recursion(x, y - 1));
}
