#include "main.h"

/**
 * is_prime_number_recursive - checks if a number is prime recursively
 * @n: the number to check for primality
 * @i: the current divisor being tested
 *
 * Return: 1 if prime, 0 if not prime
 */
int is_prime_number_recursive(int n, int i)
{
	/* Base cases */
	if (n <= 1)
	{
		return (0); /* 0 and 1 are not prime numbers */
	}
	if (i * i > n)
	{
		return (1); /* n is a prime number */
	}
	/* Check if n is divisible by the current value of i */
	if (n % i == 0)
	{
		return (0); /* n is divisible by i, hence not a prime number */
	}

	/* Recursive case */
	return (is_prime_number_recursive(n, i + 1));
}
/**
 * is_prime_number - checks if a number is prime
 * @n: the number to check for primality
 *
 * Return: 1 if prime, 0 if not prime
 */
int is_prime_number(int n)
{
	return (is_prime_number_recursive(n, 2));
}
