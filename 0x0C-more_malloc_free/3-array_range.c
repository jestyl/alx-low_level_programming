#include <stdlib.h>
#include "main.h"

/**
* *array_range - creates an array of integers
* @min: minimum range of values stored
* @max: maximum range of values stored and number of elements
*
* Return: pointer to the new array
*/

int *array_range(int min, int max)
{
	int *arr;
	int i;

	if (min > max)
		return (NULL);
	i = max - min;

	arr = malloc(sizeof(int) * (i + 1));
	if (!arr)
		return (NULL);
	while (max > min)
	{
		arr[i] = max;
		i--;
		max--;
	}
	arr[i] = min;
	return (arr);
}
