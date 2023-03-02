#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers
 * Return: Always 0
 */

int main(void)
{
	int a = 0;
	long b = 1;
	long c = 2;
	long sum = c;

	while (b + c < 4000000)
	{
		c += b;
		if (c % 2 == 0)
			sum += c;
		b = c - b;
		++i;
	}
	printf("%ld\n", sum);
	return (0);
}
