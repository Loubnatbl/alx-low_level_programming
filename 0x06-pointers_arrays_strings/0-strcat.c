#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: String that will be appended
 * @src: String to be concatenated upon
 * Return: pointer to resulting string @dest
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (dest[i])
		i++;
	for (j = 0; src[j] ; j++)
		dest[i++] = src[j];
	return (dest);
}
