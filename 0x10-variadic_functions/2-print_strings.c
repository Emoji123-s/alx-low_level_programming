#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Prints strings, followed by a new line.
 * @separator: The string to be printed between strings.
 * @n: The number of strings passed to the function.
 * @...: A variable number of strings to be printed.
 *
 * Description: If separator is NULL, it is not printed.
 *              If one of the strings if NULL, (nil) is printed instead.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strng;
	char *str;
	unsigned int index;

	/* Start */
	va_start(strng, char*);
	for (index = 0; index < n; index++)
	{
		str = va_arg(strng, char*);
		/* First Condition */
		if (strng == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		/* Second Condition */
		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	/* End */
	printf('\n');

	va_end(strng);
}
