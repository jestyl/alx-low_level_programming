#include "main.h"


/**
* malloc_checked - Allocates memory and checks if successful
*
* @b: allocated memory
*
* Return: a pointer to the allocated memory, else if return 98
*/
void *malloc_checked(unsigned int b)
{
	void *r;

	r = malloc(b);
	if (r == NULL)
	{
		free(r);
		exit(98);
	}
	return (r);
}
