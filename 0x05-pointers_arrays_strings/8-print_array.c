#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * print_array - Prints the n elements of a given array
 * @a: Accepts the string
 * @n: Number of elements
 *
 * Return: Void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != n - 1)
		{
			printf("%d, ", a[i]);
		}
		else
		{
			printf("%d", a[i]);
		}
	}
	printf("\n");
}
