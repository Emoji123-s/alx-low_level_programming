#include "main.h"

/**
 * print_times_table - Prints the n times table starting from 0.
 * @n: The value indicating the upper limit of the table.
 */
void print_times_table(int n)
{
	int row, col, product;

	if (n < 0 || n > 15)
	{
		return;
	}
	for (row = 0; row <= n; row++)
	{
		for (col = 0; col <= n; col++)
		{
			product = row * col;
			if (product < 10)
			{
				_putchar(product + '0');
			}
			else
			{
				_putchar((product / 10) + '0');
				_putchar((product % 10) + '0');
			}
			if (col != n)
			{
				_putchar('\t');
			}
		}
		_putchar('\n');
	}
}
