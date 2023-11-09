#include "function_pointers.h"

/**
 * int_index - return index place if comparison = true, else -1
 *
 * @array: array of intergers
 * @size: size of array
 * @cmp: pointer to function of one of the 3 in main
 *
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	index = size;
	if (size <= 0)
		return (-1);
	if (!array || !cmp)
		return (-1);

	while (size--)
	{
		if (cmp(array[index - size]))
			return (index - size);
	}

	return (-1);
}
