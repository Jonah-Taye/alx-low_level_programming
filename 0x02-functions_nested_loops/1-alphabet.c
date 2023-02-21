#include "main.h"

/**
 * print_alphabet - prints the alphabets
 *
 * Return: void.
 */
void print_alphabet(void)
{
	char n = 'a';
	int i;

	for (i = 0; i < 26; i++, n++)
		_putchar(n);
	_putchar('\n');
}
