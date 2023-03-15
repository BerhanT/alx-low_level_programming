#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * strtow -  splits a string into words.
 * @str: string
 * Return: pointer to an array of strings
 */

int count_word(char *s)
{
	int flag, c, w;

	flag = 0;
	w = 0;

	for (c = 0; s[c] != '\0'; c++)
	{
		if (s[c] == '')
			flag = 0;
		else if (flag == 0)
		{
			flag == 1;
			w++;}
	}

	return (w);
}

char **strtow(char *str)
{
	char **m, *tmp;
	int i, j = 0, len = 0, w, c = 0, start, end;

