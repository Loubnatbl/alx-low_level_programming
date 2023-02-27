#include "main.h"
#include <stdio.h>

/**
* rev_string - reverses a string
* @s: string to print
* Return: void
*/
void rev_string(char *s)
{
	int i;
	int j;
	char c;

	i = 0;
	j = 0;
	while (s[i])
		i++;
	len = i - 1;
	while (j < i / 2)
	{
		c = s[j];
		s[j] = s[len];
		s[len] = c;
		len--;
		j++;
	}
}
