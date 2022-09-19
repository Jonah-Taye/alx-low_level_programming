#include "main.h"

/**
 * print_rev - Prints the string in reverse order
 * @s: Accepts the string
 *
 * Return: Void
 */

void print_rev(char *s)
{
	int i = 0;
	int j = 0;
	char temp[100];

	while (*s != '\0')
	{
		temp[i] = s[0];
		i++;
		s++;
	}
	while (j < i)
	{
		_putchar(temp[i]);
		i--;
	}
	_putchar('\n');
}
