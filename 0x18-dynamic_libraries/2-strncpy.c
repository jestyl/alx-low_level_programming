#include "main.h"

/**
 * _strncpy - this fuction will concatenate] two strings
 * @dest: the string that will modified
 * @src: the string that will be concatenated to @des
 * @n: how much to copy from src into dest
 *
 * Return: a pointer to @dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j = 0;

	for (j = 0; j < n && src[j] != '\0'; j++)
		dest[j] = src[j];
	for ( ; j < n ; j++)
		dest[j] = '\0';

	return (dest);
}
