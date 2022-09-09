#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Checks if the last digit of the integer
 * is less than 6 and not 0, is 0, or greater than 5
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastDigit = n % 10;

	printf("Last digit of %d ", n);
	if (lastDigit < 6 && lastDigit != 0)
		printf("is %d and is less than 6 and not 0\n", lastDigit);
	else if (lastDigit > 5)
		printf("is %d and is greater than 5\n", lastDigit);
	else if (lastDigit == 0)
		printf("is %d and is 0\n", lastDigit);

	return (0);
}
