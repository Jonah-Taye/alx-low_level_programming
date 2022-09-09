#include <stdio.h>
/**
 * main - Prints two digit numbers without repetition
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int digit1;
	int digit2;
	int comma = 44;

	for (digit1 = 48; digit1 < 57; digit1++)
	{
		for (digit2 = digit1; digit2 < 58; digit2++)
		{
			if (digit1 == digit2)
				digit2++;
			putchar(digit1);
			putchar(digit2);
			if (digit1 < 56)
			{
				putchar(comma);
				putchar(' ');
			}
		}
	}

	return (0);
}
