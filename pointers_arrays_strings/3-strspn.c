#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: the string to check
 * @accept: the string containing characters to match
 *
 * Return: number of bytes in the initial segment of s matching accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;
	unsigned int count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				break;
			}
		}
		/* If the inner loop finishes without finding a match, stop */
		if (accept[j] == '\0')
		{
			return (count);
		}
	}
	return (count);
}
