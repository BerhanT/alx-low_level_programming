#include <stdio.h>

/**
 * main - prints all the numbers of base 16
 * Return: Always 0
 */

int main(void)
{
	int n;
	char la;

	for (n = 0; n <= 9; n++)
		putchar((n % 10) + '0');

	for (la = 'a'; la <= 'f'; la++)
		putchar(la);
	putchar('\n');
	return (0);
}
