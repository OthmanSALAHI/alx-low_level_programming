#include"main.h"
/**
 *
 * _islower - function that checks for lowercase character
 *
 * Return : if lower Always 1.
 *
 * Return : if upper Always 0.
 */

int _islower(int c)
{
		if (c >= 97 && c <= 122)
			return (1);
		return (0);
}
