#include "main.h"
/**
 * print_number - Print integer.
 * @n: integer
 * Return: Always 0 (Success)
 */

void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		if (n == -2147483648)
		{
			_putchar('2');
			n %= 1000000000;
		}
		print_number(-n);
	}
	else if (n <= 9)
	{
		_putchar(n + '0');
	}

	else
	{
		print_number(n / 10);
		print_number(n % 10);
	}
}
