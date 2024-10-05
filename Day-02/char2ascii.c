#include <stdio.h>
#include <stdlib.h>
#include "header.h"


/**
 * print_ascii_value - prints the ASCII value of a character using _putchar
 * @c: The character whose ASCII value to print
 * Return: void
 * Description: converts the ASCII value to a string and prints it
 */

void print_ascii_value(char c)
{
	char buffer[5];
	int i = 0;

	sprintf(buffer, "%d", (int)c);

	while (buffer[i] != '\0')
	{
		_putchar(buffer[i]);
		i++;
	}
}

/**
 * main - Entry point
 * Description: prints the ASCII value of a character
 * Return: Always 0 (Success)
 */
int main(void)
{
	char input;

	printf("Enter a character: ");
	scanf("%c", &input);

	print_ascii_value(input);
	_putchar('\n');

	return (0);
}
