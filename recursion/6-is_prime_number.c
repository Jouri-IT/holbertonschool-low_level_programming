#include "main.h"

/**
 * check_divisibility - checks if n is divisible by i
 * @n: the number to check
 * @i: the current divisor to test
 *
 * Return: 0 if divisible, 1 if prime reached
 */
int check_divisibility(int n, int i)
{
	if (i == n)
		return (1);
	if (n % i == 0)
		return (0);
	return (check_divisibility(n, i + 1));
}

/**
 * is_prime_number - returns 1 if n is prime, 0 otherwise
 * @n: the number to check
 *
 * Return: 1 if prime, 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (check_divisibility(n, 2));
}
