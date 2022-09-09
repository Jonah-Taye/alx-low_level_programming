#include <stdio.h>
/**
 * main - Prints the numbers 0 to 9 using putchar() function
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int numbers = 48;

	while (numbers < 58)
	{
		putchar(numbers);
		numbers++;
	}
	putchar('\n');

	return (0);
}
