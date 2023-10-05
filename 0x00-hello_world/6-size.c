#include <stdio.h>

/**
 * main - Print the size of various data types
 * Return: 0 (success)
 */
int main(void)
{
char a;
int b;
long int i;
long long int ii;
float f;

printf("Size of a char: %zu byte(s)\n", sizeof(a));
printf("Size of an int: %zu byte(s)\n", sizeof(b));
printf("Size of a long int: %zu byte(s)\n", sizeof(i));
printf("Size of a long long int: %zu byte(s)\n", sizeof(ii));
printf("Size of a float: %zu byte(s)\n", sizeof(f));
return (0);
}
