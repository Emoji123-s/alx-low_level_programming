#include <stdlib.h>
#include <stdio.h>

/**
 * main - start of program
 *
 * Return: 0 if successful and an error code otherwise
 */
int main(void)
{
	int d;

	for (d = '0'; d <= '9'; d++)
	{
	putchar(d);
	if (d != '9')
	{
	putchar(',');
	putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}
