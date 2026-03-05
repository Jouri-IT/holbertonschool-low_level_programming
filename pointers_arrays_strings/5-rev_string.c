#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: The string to be modified
 *
 * Return: void
 */
void rev_string(char *s)
{
	int len = 0, i = 0;
	char temp;

	/* Step 1: Find the length of the string */
	while (s[len] != '\0')
	{
		len++;
	}

	/* Step 2: Swap characters from the outside moving inward */
	while (i < len / 2)
	{
		temp = s[i];
		s[i] = s[len - 1 - i];
		s[len - 1 - i] = temp;
		i++;
	}
}
