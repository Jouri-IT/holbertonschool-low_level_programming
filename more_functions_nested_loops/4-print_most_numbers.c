#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */#include "main.h"

void print_most_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		if (i != '2' && i != '4')
		{
			_putchar(i); /* First use of _putchar */
		}
	}
	_putchar('\n'); /* Second use of _putchar */
}
