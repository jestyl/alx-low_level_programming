#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - fuction execute a fuction
 *
 * @array: array
 * @size: size of the array
 * @action: pointer to print in regular or hex
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (!array || !size || !action)
		return;

	while (size--)
		action(*array++);
}
