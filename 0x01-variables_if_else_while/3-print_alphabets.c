#include <stdio.h>
/**
 * main - Prints the alphabet starting
 * from small letters to capital letters
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
		smallLetters++;
	}
	while (capitalLetters <= 'Z')
	{
		putchar(capitalLetters);
		capitalLetters++;
	}
	putchar('\n');

	return (0);
}
