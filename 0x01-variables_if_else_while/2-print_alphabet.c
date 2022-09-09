#include <stdio.h>
/**
 * main - Prints the alphabet
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letters = 'a';
	
	while(letters < 123)
	{
		putchar(letters);
		letters++;
	}

	return (0);
}
