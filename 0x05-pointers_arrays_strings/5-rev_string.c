#include "main.h"
#include <stdio.h>

/**
* rev_string - reverses a string
* @s: string to print
* Return: void
*/
void rev_string(char *s)
{
	int i, j;
	char temp;

	for (i = 0; s[i] != '\0'; i++)
	{
	}
	for (j = 0; j < i / 2; j++)
	{
		temp = s[j];
		s[j] = s[i - j - 1];
		s[i - j - 1] = temp;
	}
	for (j = 0; j < i; j++)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
