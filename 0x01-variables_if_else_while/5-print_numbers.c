#include <stdio.h>
/**
 * main - Prints the numbers 0 to 9
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int numbers = 0;

	while (numbers < 10)
	{
		printf("%d", numbers);
		numbers++;
	}
	printf("\n");

	return (0);
}
