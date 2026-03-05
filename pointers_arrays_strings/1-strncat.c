#include "main.h"

/**
 * _strncat - Concatenates two strings using at most n bytes from src.
 * @dest: The destination string.
 * @src: The source string to append.
 * @n: The maximum number of bytes to use from src.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0;
	int i = 0;

	/* Step 1: Find the end of the dest string */
	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}

	/* Step 2: Append at most n bytes from src */
	while (i < n && src[i] != '\0')
	{
		dest[dest_len] = src[i];
		dest_len++;
		i++;
	}

	/* Step 3: Add a terminating null byte */
	dest[dest_len] = '\0';

	return (dest);
}
