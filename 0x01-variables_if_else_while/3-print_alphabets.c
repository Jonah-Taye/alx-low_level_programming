#include <stdio.h>
#include <stdlib.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	char n = 'a';
	char n2 = 'A';
	int i;

	for (i = 0; i < 26; i++, n++)
		putchar(n);
	for (i = 0; i < 26; i++, n2++)
		putchar(n2);
	putchar('\n');

	return (0);
}
