#include "main.h"

/**
 * _isupper - checks for upper case character
 * @c: character to be checked
 * Retun: 1 if c is uppercase 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
