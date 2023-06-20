#include"main.h"
/**
 * _islower - function that checks for lowercase character
 *
 * @c: Check the input
 *
 * Return: if lower Always 1.
 *	    if upper Always 0.
 */

int _islower(int c)
{
		return (c >= 97 && c <= 122);
}
