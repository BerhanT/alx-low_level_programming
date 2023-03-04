#include "main.h"

/**
 * _isdigit - checks for digit
 * @c: digit
 * Return: 1 if c is digit or 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
