#include "main.h"

/**
 * _strlen_recursion - Calculate the length of a given string using recursion
 * @s: Pointer to the string whose length is to be calculated
 * Return: The length of the string as an integer
*/
int _strlen_recursion(char *s)
{
	int x = 0;

	if (*s)
	{
		x++;
		x += _strlen_recursion(s + 1);

	}
	return (x);
}

