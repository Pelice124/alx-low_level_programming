#include "main.h"

/**
 * factorial - Calculates the factorial of a given integer
 * @n: The integer whose factorial is to be calculated
 * Return: The factorial of  given integer as an integer
*/
int factorial(int n)
{
	int y;

	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		y = n * factorial(n - 1);
	}
			return (y);

}

