#include <stdio.h>

int mul(int a, int b)
{
    return (a * b);
}
void print_numbers(void)
{
    int numbers = 48;

    while(numbers <= 57)
    {
        putchar(numbers);
        numbers++;
    }
    putchar('\n');
}


/**
 * print_most_numbers - Prints numbers 0 to 9 except for 2 and 4
 *
 * Return: Void
 */
void print_most_numbers(void)
{
    int numbers = 48;

    while(numbers <= 57)
    {
        if (numbers == 50 || numbers == 52)
            numbers++;
        putchar(numbers);
        numbers++;
    }
    putchar('\n');
}
void more_numbers(void)
{
	char numbers;
	int counter;

	for (counter = 1; counter <= 10; counter++)
	{
		for (numbers = 0; numbers <= 14; numbers++)
		{
            if (numbers >= 10)
            {
                putchar(numbers / 10 + '0');
            }
            putchar(numbers % 10 + '0');
        }
        putchar('\n');
	}
}

void print_line(int n)
{
    int counter;

    for (counter = 0; counter <= n - 1; counter++)
        putchar('_');
    putchar('\n');
}

void print_diagonal(int n)
{
    int counter1;
    int counter2;
    if (n > 0)
    {
    for (counter1 = 0; counter1 <= n - 1; counter1++)
    {
        for (counter2 = 1; counter2 <= counter1; counter2++)
            putchar(' ');
        putchar(92);
        putchar('\n');
    }
    }
    else
    {
        putchar('\n');
    }
}

void print_square(int size)
{
    int counter1;
    int counter2;

    for (counter1 = 0; counter1 <= size - 1; counter1++)
    {
        for (counter2 = 1; counter2 <= size; counter2++)
            putchar('#');
        putchar('\n');
    }
}

void print_triangle(int size)
{
    int counter1;
    int counter2;
    int counter3;

    for (counter1 = 0; counter1 <= size - 1; counter1++)
    {
        for (counter2 = counter1; counter2 <= size - 1; counter2++)
        {
            putchar(' ');
        }
        for (counter3 = 0; counter3 <= counter1; counter3++)
        {
            putchar('#');
        }
        putchar('\n');
    }
}
/**
 * main - check the code
 *
 * Return: Always 0.
 */

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
	/* int numbers;

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
    printf("\n");

	return (0); 
    print_line(0);
    print_line(2);
    print_line(10);
    print_line(-4);*/
    print_diagonal(0);
    print_diagonal(2);
    print_diagonal(10);
    print_diagonal(-4);
}
