#include "main.h"
#include <stdio.h>

/**
 * rot13 - encodes a string using rot13.
 * @c: pointer to string
 * Return: *c
 */

char *rot13(char *c)
{
	int i, j;
	char s1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstvuwxyz";
	char s2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefjhijklm";

	for (i = 0; c[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (c[i] == s1[j])
			{
				c[i] = s2[j];
				break;
			}
		}
	}
	return (c);
}
