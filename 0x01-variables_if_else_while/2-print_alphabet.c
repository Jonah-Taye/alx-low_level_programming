#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char n = 'a';
	int i;

	for (i = 0; i < 26; i++, n++)
		putchar(n);
	putchar('\n');

	return (0);
}
