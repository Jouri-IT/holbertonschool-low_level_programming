#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds positive numbers
 * @argc: number of command line arguments
 * @argv: array of strings containing arguments
 *
 * Return: 0 on success, 1 if an argument contains non-digits
 */
int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	/* If no numbers are passed, print 0 */
	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	/* Loop through each argument starting from argv[1] */
	for (i = 1; i < argc; i++)
	{
		/* Check every character in the string argv[i] */
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		/* Add the converted number to the running sum */
		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);
	return (0);
}
