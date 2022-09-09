#include <stdio.h>
/**
 * main - Prints all the hexadecimal numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letters = 'a';
	char numbers = 48;

	while (smallLetters <= 57)
	{
		putchar(numbers);
		numbers++;
	}
	while (letters <= 'f')
	{
		putchar(letters);
		letters++;
	}
	putchar('\n');

	return (0);
}
