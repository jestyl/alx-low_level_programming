#include "main.h"
#include <stdio.h>
/**
 * _puts - mimic stdio version of puts
 *
 * @str: value to stdout
 */
void _puts(char *str)
{
	while (*str > 0)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
