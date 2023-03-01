#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: string to be appended upon
 * @src: string to be completed at end of dest
 * @n:integer parameter to compare index to
 * Return: a pointer to the resulting string @dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int a, b;

	a = 0;
	while (dest[a])
		a++;

	for (b = 0; b < n && src[b] != '\0'; b++)
		dest[a + b] = src[b];

	dest[a + b] = '\0';

	return (dest);
}
