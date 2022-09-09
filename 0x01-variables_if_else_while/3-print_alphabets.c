#include <stdio.h>
/**
 * main - Prints the alphabet
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char smallLetters = 'a';
	char capitalLetters = 'A';

	while (smallLetters <= 'z')
	{
		putchar(smallLetters);
		letters++;
	}
	while (capitalLetters <= 'Z')
	{
		putchar(capitalLetters);
		letters++;
	}
	putchar('\n');

	return (0);
}
