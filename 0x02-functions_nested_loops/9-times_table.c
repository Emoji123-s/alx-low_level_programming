#include "main.h"

/**
 * times_table - Prints the 9 times table starting from 0.
 */
void times_table(void)
{
	int i, j, ansr;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			ansr = i * j;
			if (ansr < 10)
			{
				_putchar('0' + ansr);
			}
			else
			{
				_putchar('0' + (ansr / 10));
				_putchar('0' + (ansr % 10));
			}
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
