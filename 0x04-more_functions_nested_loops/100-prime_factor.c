#include <stdio.h>
/**
 * main - Finds the largest prime factor
 *
 * Return: returns 0
 */
int main(void)
{
	unsigned int divisor = 2;
	unsigned long dividend = 612852475143;

	while (divisor != dividend)
	{
		if (dividend % divisor == 0)
		{
			dividend = dividend / divisor;
		} else
		{
			divisor++;
		}
	}
	printf("%lu\n", dividend);
	
    return (0);
}
