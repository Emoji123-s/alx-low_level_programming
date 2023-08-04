#include <unistd.h>
#include "main.h"
int _putchar(char c);

/**
 * print_binary - Prints the binary representation of a number
 * @n: The number to be printed in binary
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);

	char c = (n & 1) + '0';

	_putchar(c);
}
