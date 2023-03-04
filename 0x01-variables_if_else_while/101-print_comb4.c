#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - prints all possible different combinations of three digits
 * Return: Always 0
 */

int main(void)
{
	int n1 = 0, n2, n3;

	while (n1 < 10)
	{
		n2 = 0;
		while (n2 < 10)
		{
			n3 = 0;
			while (n3 < 10)
			{
				if (n1 != n2 && n2 != n3 && n1 < n2 && n2 < n3)
				{
					putchar('0' + n1);
					putchar('0' + n2);
					putchar('0' + n3);
					if (n1 + n2 + n3 != 9 + 8 + 7)
					{
						putchar(',');
						putchar(' ');
					}
				}
				n3++;
			}
			n2++;
		}
		n1++;
	}
	putchar('\n');
	return (0);
}
