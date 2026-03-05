#include "main.h"

/**
 * print_rev - Prints a string, in reverse, followed by a new line.
 * @s: The string to print.
 *
 * Return: void
 */
void print_rev(char *s)
{
	int len = 0;

	/* First, find the length of the string */
	while (s[len] != '\0')
	{
		len++;
	}

	/* Step back one space to ignore the '\0', then print backward */
	for (len--; len >= 0; len--)
	{
		_putchar(s[len]);
	}

	_putchar('\n');
}
