#include"main.h"
/**
 * print_sign - print the sign of number
 *
 * @n: Check the input
 * Return: Return 1 if the number positif
 *		return 0 if null
 *		return -1 if negatif
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	} else if (n == 0)
	{
		_putchar('0');
		return (0);
	} else if (n < 0)
	{
		_putchar('-');
	}
		return (-1);
}
