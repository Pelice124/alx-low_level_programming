#include "function_pointers.h"

/**
 * array_iterator - a function given of
 * parameter on each element of the array.
 *
 * @array: it execute func 
 * @siz: size of the array
 * @action: is a pointer to the function
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t a;

	if (array && action)
	{
		a = 0;
		while (a < size)
		{
			action(array[a]);
			a++;
		}
	}
}

