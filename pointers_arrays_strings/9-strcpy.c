#include "main.h"

/**
 * _strcpy - Copies the string pointed to by src, including the
 * terminating null byte, to the buffer pointed to by dest.
 * @dest: The buffer to copy the string to.
 * @src: The source string to copy.
 *
 * Return: A pointer to the destination string @dest.
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	/* Copy each character from src to dest */
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	/* Append the null terminator to the end of dest */
	dest[i] = '\0';

	return (dest);
}
