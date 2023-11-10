#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Prints numbers, followed by a new line
 *
 * @separator: The element to be printed between strings
 * @n: The number of strings passed to the function
 * @...: A variable number of strings to be printed
 *
 * Return: Nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list vls;
	unsigned int i = 0;

	va_start(vls, n);

	while (i < n)
	{

		printf("%d", va_arg(vls, int));
		i++;
		if (i < n && (separator))
			printf("%s", separator);
	}
	putchar(10);
	va_end(vls);
}
