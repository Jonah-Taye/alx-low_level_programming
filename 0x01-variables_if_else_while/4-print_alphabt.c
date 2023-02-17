#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char n = 'a';
	int i;

	for (i = 0; i < 24; i++, n++)
	{
		if (n == 'e')
			n++;
		else if (n == 'q')
			n++;
		putchar(n);
	}
	putchar('\n');

	return (0);
}
