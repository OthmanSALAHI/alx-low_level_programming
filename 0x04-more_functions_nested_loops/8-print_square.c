#include "main.h"

/**
 * print_square - print square with #
 * @size: the size of square
 *
 */
void print_square(int size)
{
	char ch = '#';
	int he = size, we = size;

	if (size <= 0)
	{
		_putchar('\n');
	}
	while (he > 0)
	{
		we = size;
		while (we > 0)
		{
			_putchar(ch);
			we--;
		}
		_putchar('\n');
		he--;
	}
}
