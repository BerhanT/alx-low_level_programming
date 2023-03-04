#include "main.h"

/**
 * reverse_array -  reverses the content of an array of integers
 * @a: array
 * @n: number of elements of the array
 * Return:void
 */

void reverse_array(int *a, int n)
{
	int i, b;

	for (i = 0; i < n--; i++)
	{
		b = a[i];
		a[i] = a[n];
		a[n] = b;
	}
}
