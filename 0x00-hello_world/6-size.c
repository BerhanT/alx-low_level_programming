#include <stdio.h>

/**
 * main - prints the size of various types on the computer
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("sixe of a char: %lu byte(s)\n", (unsigned long)sizeof(a));
	printf("sixe of a int: %lu byte(s)\n", (unsigned long)sizeof(b));
	printf("sixe of a long int: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("sixe of a long long int: %lu byte(s)\n", (unsigned long)sizeof(d));
	printf("sixe of a float: %lu byte(s)\n", (unsigned long)sizeof(e));
	return (0);
}
