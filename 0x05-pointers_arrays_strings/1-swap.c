/**
 * swap_int - Swaps the values of a and b
 * @a: Integer that is to be swapped to b
 * @b: Integer that is to be swapped to a
 *
 * Return: Void
 */

void swap_int(int *a, int *b)
{
	int valueOfa = *a;
	int valueOfb = *b;
	*a = valueOfb;
	*b = valueOfa;
}
