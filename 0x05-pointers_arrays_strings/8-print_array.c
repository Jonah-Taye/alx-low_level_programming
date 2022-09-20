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
	int i = 0;

	while (*a != '\0')
	{
		while (i < n)
		{
			printf("%d", a[0]);
			if (i != n - 1)
			{
				printf(", ");
			}
			i++;
			a++;
		}
	}
	printf("\n");
}
