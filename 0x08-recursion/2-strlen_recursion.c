#include "main.h"
/**
 * _strlen_recursion - the length of string
 * @s: the arg
 * Return: The length of string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (_strlen_recursion(s + 1) + 1);
}
