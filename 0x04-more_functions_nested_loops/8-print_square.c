#include "main.h"

/**
 * print_square - Prints a hashtag like a square 'size' times
 * @size: Number that determines the loop
 *
 * Return: Void
 */
void print_square(int size)
{
	int counter1;
	int counter2;

	for (counter1 = 0; counter1 <= size - 1; counter1++)
	{
		for (counter2 = 1; counter2 <= size; counter2++)
			_putchar('#');
		_putchar('\n');
	}
}
