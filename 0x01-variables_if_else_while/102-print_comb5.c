#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 (Succes)
 */

int main(void)
{
	int n = 0;

	while (n < 10000)
	{
		if (n / 100 < n % 100)
		{
			putchar((n / 1000) + '0');
			putchar(((n / 100) % 10) + '0');
			putchar(' ');
			putchar(((n / 10) % 10) + '0');
			putchar((n % 10) + '0');

			if (n != 9899)

			{
				putchar(',');
				putchar(' ');
			}
		}
	
		n++;
	
	}
	
	putchar('\n');

	return (0);
}
