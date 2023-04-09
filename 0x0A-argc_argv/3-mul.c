#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplying two numbers.
 * @argc: argument count
 * @argv: arguments
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	int c, d;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	c = atoi(argv[1]);
	d = atoi(argv[2]);
	printf("%d\n", c * d);

	return (0);
}

