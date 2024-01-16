#include "main.h"

/**
 * _strcpy - program copies the string pointed to by src
 *
 * @dest: pointer to copy the string to
 * @src: the string to copy to the destination
 *
 * Return: a copy of the src
 */
char *_strcpy(char *dest, char *src)
{
	int index = 0;

	while (*src != '\0')
	{
		dest[index] = *src;
		index++;
		src++;
	}
	return (dest);
}
