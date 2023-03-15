#include <stdio.h>
#include "main.h"

/**
 * main - print the new name
 * @argc: size of array
 * @argv: array
 * Return: Always 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
