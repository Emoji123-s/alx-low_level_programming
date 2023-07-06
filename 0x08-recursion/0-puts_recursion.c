#include "main.h"

/**
 * _puts_recursion - recursive function
 * @s: pointer
 * Return - Always (0) Success
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}