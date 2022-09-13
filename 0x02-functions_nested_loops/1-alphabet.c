#include "main.h"

/**
 * print_alphabet - prints the alphabets in lowercase
 *
 * Return: Void
 */
void print_alphabet(void)
{
	char letters = 97;

	while (letters <= 122)
	{
		_putchar(letters);
	}
	_putchar('\n');
}
