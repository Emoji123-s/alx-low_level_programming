#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all its paramters.
 * @n: The number of paramters passed to the function.
 * @...: A variable number of paramters to calculate the sum of.
 *
 * Return: If n == 0 - 0.
 *         Otherwise - the sum of all parameters.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list add; /* Defined macro is add */
	unsigned int i, sum = 0;

	/*First Condition */
	if (n == 0)
		return (0);

	/* Start */
	va_start(add, n);

	for (i = 0; i < n; i++)
	{
		/* Macro and defined Datatype */
		sum += va_arg(add, int);
	}
	va_end(add);
	/* End */

	return (sum);
}
