#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit
 * Return: Always 0
 */

int main(void)
{
	int n = 0;

	while (n < 10)
	{
		putchar(48 + n);
		if (n != 9)
		{
			putchar(',');
			putchar(' ');
		}
		n++;
	}
	putchar('\n');
	return (0);
}
