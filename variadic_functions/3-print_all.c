#include "variadic_functions.h"

/**
 * print_all - prints anything based on a format string
 * @format: types of arguments (c=char, i=int, f=float, s=string)
 * Return: Nothing.
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i;
	char *sep;
	char *s;

	if (!format)
		return;
	va_start(args, format);
	i = 0;
	sep = "";
	while (format[i])
	{
		if (format[i] == 'c')
			printf("%s%c", sep, va_arg(args, int)), sep = ", ";
		if (format[i] == 'i')
			printf("%s%d", sep, va_arg(args, int)), sep = ", ";
		if (format[i] == 'f')
			printf("%s%f", sep, va_arg(args, double)), sep = ", ";
		if (format[i] == 's')
		{
			s = va_arg(args, char *);
			printf("%s%s", sep, s ? s : "(nil)"), sep = ", ";
		}
		i++;
	}
	va_end(args);
	printf("\n");
}
