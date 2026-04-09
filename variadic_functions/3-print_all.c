#include "variadic_functions.h"
#include <string.h>

/**
 * print_all - prints anything based on format string
 * @format: list of types of arguments
 * Return: Nothing.
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i;
	char *sep;
	char *s;
	char *types = "cifs";

	va_start(args, format);
	i = 0;
	sep = "";
	while (format && format[i])
	{
		s = NULL;
		if (strchr(types, format[i]) != NULL)
		{
			if (format[i] == 'c')
				printf("%s%c", sep, va_arg(args, int));
			else if (format[i] == 'i')
				printf("%s%d", sep, va_arg(args, int));
			else if (format[i] == 'f')
				printf("%s%f", sep, va_arg(args, double));
			else
			{
				s = va_arg(args, char *);
				if (s == NULL)
					s = "(nil)";
				printf("%s%s", sep, s);
			}
			sep = ", ";
		}
		i++;
	}
	va_end(args);
	printf("\n");
}
