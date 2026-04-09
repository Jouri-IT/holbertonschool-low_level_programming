#include "variadic_functions.h"

/**
 * print_all - prints anything based on format string
 * @format: list of types of arguments
 * Return: Nothing.
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i;
	unsigned int j;
	char *sep;
	char *s;
	char *types = "cifs";

	va_start(args, format);
	i = 0;
	sep = "";
	while (format && format[i])
	{
		j = 0;
		s = NULL;
		while (types[j] && types[j] != format[i])
			j++;
		if (j == 0)
			printf("%s%c", sep, va_arg(args, int)), sep = ", ";
		if (j == 1)
			printf("%s%d", sep, va_arg(args, int)), sep = ", ";
		if (j == 2)
			printf("%s%f", sep, va_arg(args, double)), sep = ", ";
		if (j == 3)
		{
			s = va_arg(args, char *);
			printf("%s%s", sep, s ? s : "(nil)"), sep = ", ";
		}
		i++;
	}
	va_end(args);
	printf("\n");
}
