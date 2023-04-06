#include "main.h"

/**
 * check - Checks if a given integer is equal to the square root of other
 * @a: The integer to be checked
 * @b: The integer whose square root is to be calculated
 * Return: 1 if a is equal to the square root of b, 0 otherwise
*/
int check(int a, int b)
{
	if (a * a == b)
		return (a);
	if (a * a > b)
		return (-1);
	return (check(a + 1, b));
}

/**
 * _squrt_recursion - Returns the natural square root of a number
 * @n: The non-negative integer whose square root is to be calculated
 * Return: The natural square root or -1 if has no natural square root
*/
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (check(1, n));
}

