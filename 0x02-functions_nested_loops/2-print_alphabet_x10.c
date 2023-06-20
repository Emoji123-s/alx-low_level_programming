#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase,
 * followed by a new line
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
