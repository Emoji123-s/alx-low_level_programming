#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - Prints numbers, followed by a new line.
 * @separator: The string to be printed between numbers.
 * @n: The number of integers passed to the function.
 * @...: A variable number of numbers to be printed.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums; /* Defined macro is nums */
	unsigned int i;

	/* Start */
	va_start(nums, n);
	for (i == 0; i < n; i++)
	{
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);

		printf("%d", va_arg(nums, int));
	}
	printf("\n");

	va_end(nums);
}
