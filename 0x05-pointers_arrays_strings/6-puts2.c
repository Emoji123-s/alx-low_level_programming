#include "main.h"

/**
 * puts2 - Prints every other character of a string,
 * starting with the first character.
 * @str: The string to print.
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		putchar(str[i]);
		i += 2;
	}
	putchar('\n');
}
