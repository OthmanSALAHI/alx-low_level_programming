#include "main.h"
/**
 * print_line - print _
 * @n: the arg
 */
void print_line(int n)
{
	char line = '_';

	while (n > 0)
	{
		_putchar(line);
		n--;
	}
	_putchar('\n');
}
