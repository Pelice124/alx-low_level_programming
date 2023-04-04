#include "main.h"

/**
 * _strchr - Finds the first occurrence of a character in a string.
 * @s: the string to be searched.
 * @c: the char to be located
 * Return: a pointer to the first occurrence of the char
*/
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);

	return (NULL);
}

