#include "main.h"

/**
 * _strcmp - Compares two strings.
 * @s1: The first string to be compared.
 * @s2: The second string to be compared.
 *
 * Return: Less than 0 if s1 < s2, 0 if they match, more than 0 if s1 > s2.
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	/* Loop until we reach the end of either string */
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		/* If characters don't match, return their ASCII difference */
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}

	/* Return the difference of the characters where it stopped */
	return (s1[i] - s2[i]);
}
