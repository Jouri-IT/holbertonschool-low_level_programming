#include "main.h"

/**
 * _strcat - Concatenates two strings.
 * @dest: The destination string.
 * @src: The source string to append to dest.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strcat(char *dest, char *src)
{
	int dest_len = 0;
	int i = 0;

	/* Step 1: Find the end of the dest string */
	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}

	/* Step 2: Append src to dest, overwriting the original null byte */
	while (src[i] != '\0')
	{
		dest[dest_len] = src[i];
		dest_len++;
		i++;
	}

	/* Step 3: Add a new terminating null byte */
	dest[dest_len] = '\0';

	return (dest);
}
