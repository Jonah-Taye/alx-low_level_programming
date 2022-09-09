#include <stdio.h>
/**
 * main - Prints the alphabet
 * except for 'q' and 'e'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letters = 'a';

	while (letters <= 'z')
	{
		if (letters == 'e')
			letters++;
		else if (letters == 'q')
			letters++;
		putchar(letters);
		letters++;
	}
	putchar('\n');

	return (0);
}
