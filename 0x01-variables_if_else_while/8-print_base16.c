#include <stdio.h>
/**
 * main - Prints all the numbers of base 16 in lowercase
 *
 * Return: 0
 */
int main(void)
{
	char c;
	int i;

	for (c = 'a'; c < 'g'; c++)
	{
		putchar(c);
	}
	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	putchar('\n');

	return (0);
}
