#include "main.h"
#include <stdio>

/**
 * print_number - prints integer
 * @n: integer
 * Return: void
 */

void print_number(int n)
{
	unsigned int y;

	y = n;

	if (n < 0)
	{
		_putchar('-');
		y = -n;
	}

	if (y / 10 != 0)
	{
		print_number(y / 10);
	}
	_putchar((y % 10) + '0');
}
