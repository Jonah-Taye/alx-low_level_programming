#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int j;
	int i;
	int k;
	int n = 44;

	for (i = 48; i < 58; i++)
	{
		for (k = (i + 1); k < 57; k++)
		{
			for (j = (k + 1); j < 58; j++)
			{
				if (k == j)
				{
					;
				}
				else
				{
					putchar(i);
					putchar(k);
					putchar(j);
					if (i < 55)
					{
						putchar(n);
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

