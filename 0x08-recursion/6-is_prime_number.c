#include "main.h"
#include <stdio.h>
int check_prime(int n, int i);
/**
 * is_prime_number - Returns if a number is prime
 * @n: the number to be checked
 * Return: integer value
 */
int is_prime_number(int n)
{
return (check_prime(n, 1));
}
/**
 * check_prime - check if number is prime
 * @n: the number to be checked
 * @i: the iteration
 * Return: 1 for prime or 0 composite
 */
int check_prime(int n, int i)
{
if (n <= 1)
return (0);
if (n % i == 0 && i > 1)
return (0);
if ((n / i) < i)
return (1);
return (check_prime(n, i + 1));
}
/**
 * is_divisible - Checks if a number is divisible.
 * @num: The number to be checked
 * @div: The divisor
 * Return: If the number is divisible - 0
 *  If the number is not divisible - 1
 */
int is_divisible(int num, int div)
{
if (num % div == 0)
return (0);
}
