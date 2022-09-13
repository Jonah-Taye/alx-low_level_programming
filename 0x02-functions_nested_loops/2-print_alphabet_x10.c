#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabets in lowercase 10 times
 *
 * Return: Void
 */
void print_alphabet_x10(void)
{
	char letters;
	int counter;

	for (counter = 1; counter <= 10; counter++)
	{
		for (letters = 'a'; letters <= 'z'; letters++)
		{
			_putchar(letters);
		}
		_putchar('\n');
	}
}
