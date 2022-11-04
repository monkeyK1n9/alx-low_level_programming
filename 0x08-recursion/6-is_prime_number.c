#include "main.h"

int check_prime(int num, int value);

/**
 * check_prime - checks if a number is prime from start
 * in is_prime_number function
 * @num: the number to check
 * @value: increasing value to verify prime
 * Return: 1 if success, 0 else
 */

int check_prime(int num, int value)
{
	int q = num / value;

	if (value > num)
		return (0);
	if (q * value == num)
		return (0);
	if (value == num)
		return (1);

	return (check_prime(num, value + 1));
}

/**
 * is_prime_number - finds if a number is prime or not
 * @n: test number
 * Return: 1 if success, else 0
 */

int is_prime_number(int n)
{
	int i = 2;

	if (n < 0)
		return (0)

	return (check_prime(n, i));
}
