#include <stdio.h>

/**
 * main - Prints numbers from 1 to 100 and if the number is divisible
 * by 3 it prints Fizz
 * by 5 it prints Buzz
 * by both 3 and 5 prints FizzBuzz
 *
 * Return: Always 0.
 */
int main(void)
{
	int numbers;

	for (numbers = 1; numbers <= 100; numbers++)
	{
		if (numbers % 3 == 0 && numbers % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (numbers % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (numbers % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", numbers);
		}
	}

	return (0);
}
