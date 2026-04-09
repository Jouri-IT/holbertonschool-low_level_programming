#include "variadic_functions.h"

/**
 * print_char - prints a char
 * @args: the list of args
 */
void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
 * print_int - prints an int
 * @args: the list of args
 */
void print_int(va_list args)
{
	printf("%d", va_arg(args, int));
}

/**
 * print_float - prints a float
 * @args: the list of args
 */
void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}

/**
 * print_string - prints a string
 * @args: the list of args
 */
void print_string(va_list args)
{
	char *s = va_arg(args, char *);

	if (!s)
	{
		printf("(nil)");
		return;
	}
	printf("%s", s);
}

/**
 * print_all - prints anything based on format string
 * @format: list of types of arguments
 * Return: Nothing.
 */
void print_all(const char * const format, ...)
{
	types_t types[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string},
		{'\0', NULL}
	};
	va_list args;
	char *sep;
	int i;
	int j;

	va_start(args, format);
	i = 0;
	sep = "";
	while (format && format[i])
	{
		j = 0;
		while (types[j].z)
		{
			if (format[i] == types[j].z)
			{
				printf("%s", sep);
				types[j].f(args);
				sep = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
