#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * count_word - counts word
 * @s: input character
 * Return: number of words
 */

int count_word(char *s)
{
	int flag, c, w;

	flag = 0;
	w = 0;

	for (c = 0; s[c] != '\0'; c++)
	{
		if (s[c] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			w++;
		}
	}

	return (w);
}

/**
 * strtow -  splits a string in to words
 * @str: string
 * Return: pointer to an array of strings
 */

char **strtow(char *str)
{
	char **m, *tmp;
	int i, j = 0, len = 0, w, c = 0, start, end;

	while (*(str + len))
		len++;
	w = count_word(str);
	if (w == 0)
		return (NULL);

	m = (char **) malloc(sizeof(char *) * (w + 1));
	if (m == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				tmp = (char *) malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				m[j] = tmp - c;
				j++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = i;
	}
	m[j] = NULL;

	return (m);
}
