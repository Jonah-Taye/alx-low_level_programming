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
	int n = 44;

	for (i = 48; i < 58; i++)
	{
		for (j = i; j < 58; j++)
		{
			if (i == j)
			{
				;
			}
			else
			{
				putchar(i);
				putchar(j);
				if (i < 56)
				{
					putchar(n);
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

