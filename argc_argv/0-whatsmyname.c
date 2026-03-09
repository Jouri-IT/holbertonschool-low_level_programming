#include <stdio.h>

/**
 * main - prints the name of the program, followed by a new line
 * @argc: number of arguments (unused in this task)
 * @argv: array of strings containing arguments
 *
 * Return: Always 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
