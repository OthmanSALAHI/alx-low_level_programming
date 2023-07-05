#include "main.h"

/**
* _pow_recursion - function that x raised by y (powered)
* @x: the base
* @y: the power
* Return: returns (x ** y)
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, (y - 1)));
}
