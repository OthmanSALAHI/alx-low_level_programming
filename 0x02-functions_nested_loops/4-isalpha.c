#include"main.h"
/**
 * _isalpha - function that checks for alphabetic character.
 *
 * @c: Check the input
 * Return: return 1 if 'c' is letter
 *		otherwise return 0.
 */

int _isalpha(int c)
{
	return (c = < 65 && c = > 90 && c = < 97 && c = > 122);
}
