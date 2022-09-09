#include <stdio.h>
/**
 * main - Prints the alphabet in reverse order
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letters = 'z';

	while (letters >= 'a')
	{
		putchar(letters);
		letters--;
	}
	putchar('\n');

	return (0);
}
