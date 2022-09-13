#include "main.h"

/**
 * print_alphabet - prints the alphabets in lowercase
 *
 * Return: Void
 */
void print_alphabet(void)
{
	char letters = 'a';

	while (letters <= 'z')
	{
		_putchar(letters);
		letters++;
	}
	_putchar('\n');
}
