#include "main.h"
#include <string.h>

/**
 * puts2 - Prints every other character in a string
 * @str: Accepts the string
 *
 * Return: Void
 */

void puts2(char *str)
{
	int i = 0;

	while (*str != '\0')
	{
		if (i % 2 == 0)
			_putchar(str[0]);
		str++;
		i++;
	}
	_putchar('\n');
}
