#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: The string to be converted.
 *
 * Return: The integer value of the converted string.
 */
int _atoi(char *s)
{
	int sign = 1;
	unsigned int num = 0;
	int started = 0;

	while (*s)
	{
		/* Keep track of the sign */
		if (*s == '-')
		{
			sign *= -1;
		}

		/* If we find a digit, start building the number */
		if (*s >= '0' && *s <= '9')
		{
			started = 1;
			num = (num * 10) + (*s - '0');
		}
		/* If we've already started building and hit a non-digit, stop */
		else if (started == 1)
		{
			break;
		}

		s++;
	}

	return (num * sign);
}
