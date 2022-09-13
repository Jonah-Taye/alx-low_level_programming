#include "main.h"

/**
 * times_table - Prints the multiplications table fron 0 to 9
 *
 * Return: Void
 */
void times_table(void)
{
	int number1;
	int number2;
	int product;
	int product1;
	int product2;

	for (number1 = 0; number1 < 10; number1++)
	{
		for (number2 = 0; number2 < 10; number2++)
		{
			product = number1 * number2;
			product1 = product / 10;
			product2 = product % 10;
			
			if (product >= 10)
			{
				_putchar(product1 + '0');
				_putchar(product2 + '0');
				if (number2 < 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			else
			{
				if (number2 > 8)
				{
					_putchar(' ');
					_putchar(product + '0');
				}
				else
				{
					_putchar(' ');
					_putchar(product + '0');
					_putchar(',');
					_putchar(' ');
				}
			}
		}
		_putchar('\n');
	}
}
