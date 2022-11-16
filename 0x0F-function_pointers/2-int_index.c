#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @array: input array
 * @size: number of elements in the array
 * @cmp: pointer to the function to be used to compare values
 * Return: int
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	if (cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
