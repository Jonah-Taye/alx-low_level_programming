#include <stdio.h>
/**
 * main - Prints three digit numbers without repetition
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int digit1;
	int digit2;
	int digit3;
	int comma = 44;

	for (digit1 = 48; digit1 < 56; digit1++)
	{
		for (digit2 = digit1; digit2 < 57; digit2++)
		{
			if (digit1 == digit2)
				digit2++;
			for (digit3 = digit2; digit3 < 58; digit3++)
			{
				if (digit1 == digit3 || digit2 == digit3)
					digit3++;
				putchar(digit1);
				putchar(digit2);
				putchar(digit3);
				if (digit1 < 55)
				{
					putchar(comma);
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
