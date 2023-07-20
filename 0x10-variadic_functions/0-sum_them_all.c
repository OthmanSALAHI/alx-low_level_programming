#include "variadic_functions.h"
/**
 * sum_them_all - sum all the argmunets.
 * @n: num of arguments.
 * Return: 0, or sum.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int arg;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		arg = va_arg(args, int);
		sum += arg;
	}
	va_end(args);
	return (sum);
}
