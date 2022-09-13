#include "main.h"

/**
 * print_alphabet - prints the alphabets in lowercase
 *
 * Void function doesn't have a return statment
 */
void print_alphabet(void)
{
	char letters = 'a';

	while (letters <= 'z')
	{
		_putchar(letters);
	}
	_putchar('\n');
}