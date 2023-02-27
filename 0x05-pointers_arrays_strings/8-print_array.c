#include "main.h"

/**
 * print_array - prints n elements of an array of integers
 * @str: the string
 * Return: void
 */

void print_array(int *a, int n)
{
	int i = 0;
	int n;

	while (str[i])
		i++;
	if (i % 2 == 1)
		n = (i - 1) / 2;
	else
		n = i / 2;
	while (str[n])
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
