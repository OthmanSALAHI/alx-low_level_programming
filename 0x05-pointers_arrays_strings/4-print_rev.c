#include "main.h"

/**
 *  print_rev - print string to stdout in reverse.
 * @s: pointer to string.
 * Return: Always 0.
 */

void print_rev(char *s)
{
	int len = 0;
	int i;

	while (s[len] != '\0')
	{
		len++;
	}
	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
