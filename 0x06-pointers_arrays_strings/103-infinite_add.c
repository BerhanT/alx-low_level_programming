#include "main.h"

/**
 * reverse_string -  reverses string
 * @n: integer
 * Return:void
 */

void reverse_string(char *n)
{
	int i = 0, j = 0;
	char temp;

	while (*(n + i) != '\0')
	{
		i++;
	}
	i--;

	for (j = 0; j < i; j++, i--)
	{
		temp = *(n + j);
		*(n + j) = *(n + i);
		*(n + i) = temp;
	}
}

/**
 * infinite_add - that adds two numbers.
 * @n1: first number
 * @n2: second number
 * @r: pointer to buffer
 * @size_r: size of buffer
 * Return: pointer
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int over = 0, i = 0, j = 0, d = 0;
	int v1 = 0, v2 = 0, temp_t = 0;

	while (*(n1 + i) != '\0')
		i++;
	while (*(n2 + j) != '\0')
		j++;
	i--;
	j--;
	if (j >= size_r || i >= size_r)
		return (0);
	while (j >= 0 || i >= 0 || over == 1)
	{
		if (i < 0)
			v1 = 0;
		else
			v1 = *(n1 + i) - '0';
		if (j < 0)
			v2 = 0;
		else
			v2 = *(n2 + j) - '0';
		temp_t = v1 + v2 + over;
		if (temp_t >= 10)
			over = 1;
		else
			over = 0;
		if (d >= (size_r - 1))
			return (0);
		*(r + d) = (temp_t % 10) + '0';
		d++;
		j--;
		i--;
	}
	if (d == size_r)
		return (0);
	*(r + d) = '\0';
	reverse_string(r);
	return (r);
}
