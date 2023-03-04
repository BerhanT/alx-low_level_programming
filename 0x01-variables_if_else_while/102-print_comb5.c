#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - prints all possible combinations of two two-digit numbers.
 * Return: Always 0
 */

int main(void)
{
	int n1 = 0, n2;

	int a, b, c, d;

	while (n1 <= 98)
	{
		a = (n1 / 10 + '0');
		b = (n1 % 10 + '0');
		n2 = 0;
		while (n2 <= 99)
		{
			c = (n2 / 10 + '0');
			d = (n2 % 10 + '0');

			if (n1 < n2)
			{
				putchar(a);
				putchar(b);
				putchar(' ');
				putchar(c);
				putchar(d);
				if (n1 != 98)
				{
					putchar(',');
					putchar(' ');
				}
			}
			n2++;
		}
		n1++;
	}
	putchar('\n');
	return (0);
}
