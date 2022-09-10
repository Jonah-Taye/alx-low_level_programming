#include <stdio.h>
/**
 * main - Prints two two-digit numbers without the two numbers repeating
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int digit1;
	int digit2;
	int digit3;
	int digit4;
	int comma = 44;

	for (digit1 = 48; digit1 < 58; digit1++)
	{
		for (digit2 = 48; digit2 < 57; digit2++)
		{
			for (digit3 = 48; digit3 < 58; digit3++)
			{
				for (digit4 = digit2; digit4 < 58; digit4++)
				{
					if (digit2 == digit4)
						digit4++;
					putchar(digit1);
					putchar(digit2);
					putchar(' ');
					putchar(digit3);
					putchar(digit4);
					if (digit2 < 56)
					{
						putchar(comma);
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
