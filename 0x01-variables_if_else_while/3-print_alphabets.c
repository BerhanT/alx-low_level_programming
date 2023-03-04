#include <stdio.h>

/**
 * main - prints alphabet in lower case
 * Return: Always 0
 */

int main(void)
{
	char l, u;

	for (l = 'a'; l <= 'z'; l++)
	{
		putchar(l);
	}
	for (u = 'A'; u <= 'Z'; u++)
	{
		putchar(u);
	}
	putchar('\n');
	return (0);
}
