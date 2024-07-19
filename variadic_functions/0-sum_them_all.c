#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - summarize all arguments
 * @n: total of arguments
 * Return: k result of the addition
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int j;
	int k = 0;
	unsigned int i;

	if (n == 0)
		return (0);
	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		j = va_arg(args, int);
		k += j;
	}
	va_end(args);
	return (k);
}
