#include "variadic_functions.h"

/**
 * print_numbers - prints numbers separated by a string
 * @separator: string to print between numbers
 * @n: number of integers
 * Return: Nothing.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);
	i = 0;
	while (i < n)
	{
		printf("%d", va_arg(args, int));
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
		i++;
	}
	va_end(args);
	printf("\n");
}
