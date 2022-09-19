#include "main.h"

/**
 * _puts - Prints the passed string
 * @str: Accepts the string
 *
 * Return: Void
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(str[0]);
		*str++;
	}
	_putchar('\n');
}
