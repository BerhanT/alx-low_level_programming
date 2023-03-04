#include <stdio.h>

/**
 * main - prints alphabet in lower case
 * Return: Always 0
 */

int main(void)
{
	char lo;

	for (lo = 'a'; lo <= 'z'; lo++)
	{
		putchar(lo);
	}
	putchar('\n');
	return (0);
}
