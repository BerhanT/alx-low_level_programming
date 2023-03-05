#include <stdio.h>
#include <math.h>

/**
 * main -  finds and prints the largest prime factor of the number
 * Return: Always 0
 */

int main(void)
{
	long x, maxf;
	long n = 612852475143;
	double sqr = sqrt(n);

	for (x = 1; x <= sqr; x++)
	{
		if (n % x == 0)
		{
			maxf = n / x;
		}
	}
	printf("%ld\n", maxf);
	return (0);
}
