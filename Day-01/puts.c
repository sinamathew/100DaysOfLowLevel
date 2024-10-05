#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 * Description: Get size for data types and print them
 *	to the standard output with puts
 */

int main(void)
{
	int char_size;
	int int_size;
	int float_size;
	int double_size;
	char buffer[50];

	char_size = sizeof(char);
	int_size = sizeof(int);
	float_size = sizeof(float);
	double_size = sizeof(double);


	sprintf(buffer, "Size of a char: %d byte(s)", char_size);
	puts(buffer);

	sprintf(buffer, "Size of an int: %d byte(s)", int_size);
	puts(buffer);

	sprintf(buffer, "Size of a float: %d byte(s)", float_size);
	puts(buffer);

	sprintf(buffer, "Size of a double: %d byte(s)", double_size);
	puts(buffer);

	return (0);
}
