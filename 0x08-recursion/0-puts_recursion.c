#include "main.h"
/**
 * _puts_recursion - entrer points
 * @s: the arg
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\n');
		return;
	}
	_putchar(*s++);
	_puts_recursion(s);
}

