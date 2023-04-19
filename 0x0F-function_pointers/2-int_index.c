#include "function_pointers.h"

/**
  * int_index - return index if compa. = true else -1
  * @array: array
  * @size: size of elements
  * @cmp: pointer to func
  *
  * Return: 0
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (i < size)
			{
				if (cmp(array[i]))
					return (i);

				i++;
			}
		}
	}

	return (-1);
}

