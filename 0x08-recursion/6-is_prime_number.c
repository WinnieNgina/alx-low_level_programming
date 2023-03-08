#include "main.h"

/**
 * prime_finder - Checks to see if number(s) is prime
 * @div: number to divide prime number with
 * @p: Possible prime number
 *
 * Return: 1 if prime, 0 if not prime.
 */

int prime_finder(int div, int p)
{
	if (p < 2 || p % div == 0)
		return (0);
	else if (div > p / 2)
		return (1);
	else
		return (prime_finder(div + 1, p));
}

/**
 * is_prime_number - States if number is prime or not.
 * @n: Number to check
 * prime_finder - checks prime numbers
 * Return: 1 if prime, 0 if not
 */

int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (prime_finder(2, n));
}
