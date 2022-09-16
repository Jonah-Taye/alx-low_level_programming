#include "main.h"

/**
 * print_line - Prints a line n times
 * @n: Number that determine the loop
 *
 * Return: Void
 */
void print_line(int n)
{
	int counter;

	for (counter = 0; counter <= n - 1; counter++)
		_putchar('_');
	_putchar('\n');
}
