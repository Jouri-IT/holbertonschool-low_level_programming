#include "main.h"

/**
 * puts_half - Prints half of a string, followed by a new line.
 * @str: The string to be printed.
 *
 * Return: void
 */
void puts_half(char *str)
{
	int len = 0;
	int n;

	/* Find the total length of the string */
	while (str[len] != '\0')
	{
		len++;
	}

	/* Determine the starting index (n) based on even or odd length */
	if (len % 2 == 0)
	{
		n = len / 2;
	}
	else
	{
		n = (len + 1) / 2;
	}

	/* Print from index n to the end of the string */
	while (str[n] != '\0')
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
