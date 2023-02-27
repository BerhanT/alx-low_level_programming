#include <stdio.h>
#include "main.h"

/**
 * _strlen - Returns the length of a string
 * @s: The string
 * Return: the length of @str
 */
int _strlen(char *s)
{
	size_t length = 0;

	while (*s++)
		length++;
	return (length);
}
