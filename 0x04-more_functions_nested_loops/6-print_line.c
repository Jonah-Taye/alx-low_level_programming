#include "main.h"

/**
 * print_line - prints '_' character n times
 * @n: determines the number of times the character is printed
 *
 * Return: void.
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}

	}
	_putchar('\n');
}
