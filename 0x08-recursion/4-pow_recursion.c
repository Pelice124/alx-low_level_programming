#include "main.h"

/**
 * _pow_recursion -Calculate the value of a given base raised to a exponent
 * @x: The base value
 * @y: The exponent value
 * Return: The result of the base rased to the exponent as an integer
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y != 0)
		return (x * _pow_recursion(x, y - 1));

	else
	{
		return (1);
	}

