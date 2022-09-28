#include "main.h"
/**
*isprime - check if n is a prime number
*@a: divider
*@n: integer
*Return: if prime 1, if not prime 0
*/
int isprime(int a, int n)
{
	if (n < 0)
	{
		return (0);
	}
	else if (n == 0 || n == 1)
	{
		return (0);
	}
	else if ((a > (n / 2)))
	{
		return (1);
	}
	else if (n % a == 0)
	{
		return (0);
	}
	else
	{
		return (isprime(++a, n));
	}
}
/**
*is_prime_number - calls isprime
*@n: integer
*Return: 1 if prime, 0 if not prime
*/
int is_prime_number(int n)
{
	return (isprime(2, n));
}
