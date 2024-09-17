#include <stdio.h>
#include "header.h"

/**
 * _printchar - print characters to stdout
 * @str: string to print
 * Return: void
 * Description: print characters to stdout
 * using _putchar
 */

void _printchar(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
}
