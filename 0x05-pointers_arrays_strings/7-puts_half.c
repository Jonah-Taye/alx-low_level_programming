#include "main.h"
#include <string.h>

/**
 * puts_half - Prints half of a string
 * @str: Accepts the string
 *
 * Return: Void
 */

void puts_half(char *str)
{
	int i;
	int j;
	int len = strlen(str);

	i = len / 2;
	j = 1;

	if (len % 2 == 0)
	{
		while (*str != '\0')
		{
			if (j > i)
				_putchar(str[0]);
			str++;
			j++;
		}
	}
	else
	{
		while (*str != '\0')
		{
			i = (len - 1) / 2;
			if (j > i + 1)
				_putchar(str[0]);
			str++;
			j++;
		}
	}
	_putchar('\n');
}
