#include "main.h"
#include <stdlib.h>
/**
 * argstostr - main entry
 *
 * @ac: int input
 * @av: double pointer array
 *
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
	char *str, *temp;
	int i, z, length;

	if (ac == 0 || av == NULL)
		return (NULL);
	length = 0;
	for (i = 0; i < ac; i++)
	{
		temp = *(av + i);
		for (z = 0; temp[z]; z++)
		{
			length++;
		}
		length += 1;
	}
	str = malloc(sizeof(char) * length + 1);
	length = 0;
	for (i = 0; i < ac; i++)
	{
		temp = *(av + i);
		for (z = 0; temp[z]; ++z)
		{
			str[length] = temp[z];
			length++;
		}
			str[length] = '\n';
			length++;
	}
	str[length] = '\0';
	return (str);
}
