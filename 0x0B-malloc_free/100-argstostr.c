#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: int input
 * @av: double pointer array
 * Return:  pointer to a new string, or NULL if it fails
 */

char *argstostr(int ac, char **av)
{
	int i, j;
	int l = 0, m = 0;
	char *ch;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			m++;
	}
	m += ac;

	ch = malloc(sizeof(char) * m + 1);
	if (ch == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			ch[l] = av[i][j];
			l++;
		}
		if (ch[l] == '\0')
		{
			ch[l++] = '\n';
		}
	}
	return (ch);
}
