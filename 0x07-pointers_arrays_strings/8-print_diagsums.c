#include "main.h"
/**
 * print_diagsums - prints the sums of the two diagonals of a square mat
 * @a: pointer to start mat
 * @size: width of mat column
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int x, y, z, l = 0, r = 0;

	for (x = 0; x < size; x++)
	{
		p = (x * size) + x;
		l += *(a + z);
	}
	for (y = 0; y < size; y++)
	{
		p = (y * size) + (size - 1 - y);
		r += *(a + z);
	}
	printf("%i, %i\n", l, r);
}

