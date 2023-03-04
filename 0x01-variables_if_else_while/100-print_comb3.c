#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - prints all possible different combinations of two digits
 * Return: Always 0
 */

int main(void)
{
	int n2, n1 = 0;

	while (n1 < 10)
	{
		n2 = 0;
		while (n2 < 10)
		{
			if (n1 != n2 && n1 < n2)
			{
				putchar('0' + n1);
				putchar('0' + n2);
				if (n1 + n2 != 17)
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
