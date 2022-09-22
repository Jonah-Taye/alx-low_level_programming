#include <string.h>
/**
 * reverse_array - Reverses the array
 * @a: The value of the array
 * @n: The number of elements in the array
 *
 * Return: The reversed array value
 */

void reverse_array(int *a, int n)
{
	int i;
	int temp[600];

	for (i = 0; i <= n; i++)
	{
		temp[i] = a[n - i - 1];
	}
	for (i = n - 1; i >= 0; i--)
	{
		a[i] = temp[i];
	}
}
