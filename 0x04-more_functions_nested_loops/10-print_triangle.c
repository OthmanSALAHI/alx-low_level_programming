#include "main.h"

/**
* print_triangle - prints a triangle
* @size: the size of the triangle
* Return: void
*/
void print_triangle(int size)
{

	char c     = '#';
	char space = ' ';
	int space_count = (size - 1);
	int char_count  = (1);
	int tmp;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	while (space_count >= 0)
	{
		tmp = space_count;
		while (tmp > 0)
		{
			_putchar(space);
			tmp--;
		}
		tmp = char_count;
		while (tmp > 0)
		{
			_putchar(c);
			tmp--;
		}

		_putchar('\n');
		char_count++;
		space_count--;
	}
}
