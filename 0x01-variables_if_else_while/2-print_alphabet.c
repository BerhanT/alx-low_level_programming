#include <stdio.h>

/**
 * main - prints alphabet in lower case
 * Return: Always 0
 */

int main(void)
{
	char l;

	for (l = 'a'; l < 'z'; l++)
	{
		putchar(l);
	}
	putchar('\n');
	return (0);
}
