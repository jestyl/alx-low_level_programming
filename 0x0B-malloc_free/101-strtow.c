#include <stdlib.h>
#include "main.h"

/**
 * count_word - helper function to count the number of words in a string
 * @s: string to evaluate
 *
 * Return: number of words
 */
int count_word(char *s)
{
	int c, flag = 0, w = 0;

	for (c = 0; s[c] != '\0'; c++)
	{
		if (s[c] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			w++;
		}
	}
	return (w);
}

/**
 * **strtow - splits a string into words
 * @str: string to split
 * Return: pointer to an array of strings (Success) or NULL (Error)
 */
char **strtow(char *str)
{
	int i, j, k = 0, len = 0, words, c = 0, start = 0, end = 0;
	char **matrix, *tmp;

	while (str[len])
		len++;
	words = count_word(str);
	if (words == 0)
		return (NULL);
	matrix = (char **)malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				tmp = (char *)malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);

				for (j = start; j < end; j++)
					tmp[j - start] = str[j];

				tmp[end - start] = '\0';

				matrix[k++] = tmp;
				c = 0;
			}
		} else if (c++ == 0)
		{
			start = i;
		}
	}

	matrix[k] = NULL;

	return (matrix);
}
