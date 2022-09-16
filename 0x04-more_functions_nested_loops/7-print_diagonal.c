#include "main.h"

/**
 * print_diagonal - Prints a backslash n times
 * @n: Number that determines the loop
 *
 * Return: Void
 */
void print_diagonal(int n)
{
	int counter1;
	int counter2;

	if (n > 0)
	{
		for (counter1 = 0; counter1 <= n - 1; counter1++)
		{
			for (counter2 = 1; counter2 <= counter1; counter2++)
				_putchar(' ');
			_putchar(92);
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
