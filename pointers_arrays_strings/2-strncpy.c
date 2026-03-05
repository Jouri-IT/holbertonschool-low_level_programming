#include "main.h"

/**
 * _strncpy - Copies a string, using at most n bytes.
 * @dest: The destination buffer.
 * @src: The source string.
 * @n: The maximum number of bytes to copy.
 *
 * Return: A pointer to the destination string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	/* Step 1: Copy characters until the end of src or limit n */
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	/* Step 2: If we haven't hit n yet, pad the rest with null bytes */
	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
