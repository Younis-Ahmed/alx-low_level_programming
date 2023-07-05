#include "main.h"

int check_prime(int, int);
/**
 * is_prime_number - checks if input is prime number
 * @n: number to be checked
 * Return: 1 if input integer is prime number, otherwise return 0
 */
int is_prime_number(int n)
{
	return (check_prime(n, 1));
}
/**
 * check_prime - checks if prime number
 * @n: number to be checked
 * @i: iterator
 * Return: a, 1 or 0
 */
int check_prime(int n, int i)
{
	if (n <= 1)
	{
		return (0);
	}
	else if (n % i == 0 && i > 1)
	{
		return (0);
	}
	else if ((n / i) < i)
	{
		return (1);
	}
	return (check_prime(n, i + 1));
}
