#include <stdio.h>
#include "main.h"

/**
 * puts_half - print the second half of the string
 * @str: the full string
 * Return: void
 */

void puts_half(char *str)
{
	int j = 0;
	int n;

	while (str[j] != '\0')
	{
		j++;
	}
	if (j % 2 == 1)
	{
		n = (j - 1) / 2;
		n += 1;
	}
	else
	{
		n = j / 2;
	}

	for (; n < j; n++)
	{
		_putchar(str[n]);
	}
	_putchar('\n');
}
