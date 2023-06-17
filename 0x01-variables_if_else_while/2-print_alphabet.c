#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - start of program
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}

	putchar('\n');
	return (0);
}
