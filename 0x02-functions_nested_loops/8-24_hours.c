#include "main.h"

/**
 * jack_bauer - Prints the time in 24 hr format
 *
 * Return: Void
 */
void jack_bauer(void)
{
	int hour1, hour2;
	int minute1, minute2;

	for (hour1 = 0; hour1 < 3; hour1++)
	{
		for (hour2 = 0; hour2 < 10; hour2++)
		{
			for (minute1 = 0; minute1 < 6; minute1++)
			{
				for (minute2 = 0; minute2 < 10; minute2++)
				{
					_putchar(hour1 + '0');
					_putchar(hour2 + '0');
					_putchar(':');
					_putchar(minute1 + '0');
					_putchar(minute2 + '0');
					_putchar('\n');
					if (hour1 == 2 && hour2 == 3 && minute1 == 5 && minute2 == 9)
						return;
				}
			}
		}
	}
}
