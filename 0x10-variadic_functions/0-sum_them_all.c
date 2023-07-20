#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - it returns the sum of all paramters
 * @n: no of paramters passed to the function
 * @...: calculates the sum of a varying number of parameters
 *
 * Return: If n == 0 - 0.
 * Otherwise - the sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum = 0;

	va_start(ap, n);

	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}
