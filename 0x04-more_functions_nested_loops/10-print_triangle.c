#include "main.h"

/**
 * print_triangle - Prints a hashtag sign in a triangle shape size times
 * @size: Number that determines the loop
 *
 * Return: Void
 */
void print_triangle(int size)
{
	int counter1;
	int counter2;
	int counter3;

	for (counter1 = 0; counter1 <= size - 1; counter1++)
	{
		for (counter2 = counter1; counter2 <= size - 1; counter2++)
			putchar(' ');
		for (counter3 = 0; counter3 <= counter1; counter3++)
			putchar('#');
		putchar('\n');
	}
