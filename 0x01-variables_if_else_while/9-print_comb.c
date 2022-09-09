#include <stdio.h>
/**
 * main - Prints the numbers 0 to 9 using putchar() function
 * and adds a comma between the numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int numbers = 48;
	int comma = 44;

	while (numbers < 58)
	{
		putchar(numbers);
		if (numbers < 57)
		{
			putchar(comma);
			putchar(' ');
			numbers++;
		}
		else
			numbers++;
	}
	putchar('\n');

	return (0);
}
