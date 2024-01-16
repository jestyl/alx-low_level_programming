#include "main.h"

/**
  * _strlen - return the length of the string as an int value
  * @s: the string to measure.
  *
  * Return: Int value of the length.
  */
int _strlen(char *s)
{
	int lngth = 0;

	while (*(s + lngth) != '\0')
	{
		lngth++;
	}
	return (lngth);
}
