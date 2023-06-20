#include "main.h"

/**
 * print_alphabet_x10(void) - prints the alphabet 10 times
 *
 * Return : Always 0
 */
void print_alphabet_x10(void)
{
	char p;
	int i = 0;

	while (i <= 9)
	{
		for (p = 'a'; p <= 'z'; p++)
		{
			_putchar(p);
		}
			_putchar('\n');
			i++;
	}
}
