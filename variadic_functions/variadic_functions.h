#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * struct types_s - struct for format/function pairs
 * @z: the format character
 * @f: the associated print function
 */
typedef struct types_s
{
	char z;
	void (*f)(va_list);
} types_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_int(va_list args);
void print_char(va_list args);
void print_string(va_list args);
void print_float(va_list args);

#endif
