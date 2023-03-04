#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - prints all possible different combinations of three digits
 * Return: Always 0
 */

int main(void)
{
	int n1, n2, n3;

	for (n1 = '0'; n1 < '9'; n1++)
	{
		for (n2 = n1 + 1; n2 <= '9'; n1++)
		{
			for (n3 = n2 + 1; n3 <= '9'; n3++)
			{
				if ((n1 != n2) != n3)
				{
					putchar(n1);
					putchar(n2);
					putchar(n3);
					if (n1 == '7' && n2 == '8')
						continue;
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
