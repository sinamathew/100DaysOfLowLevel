#include <stdio.h>

void print_pattern(char character, int lenght, int breadth);


/**
 * print_pattern - Print a pattern of a character
 * Desciption: Takes three arguments that defines hoe to print
 *
 * @character: The character that forms the pattern
 * @lenght: The lenghtof the pattern (in text)
 * @breadth: The breadth of the pattern (in text)
 *
 */

void print_pattern(char character, int lenght, int breadth)
{
	/* Define the loop variables */
	int i, j;

	/* A nested for loop */
	/* First loop is for length while the other if for breadth*/
	for (i = 0; i < lenght; i++)
	{
		for (j = 0; j < breadth; j++)
			putchar(character);
		putchar('\n');
	}
}

/**
 * main - Entry file
 * Description: Functions and Nested Loops
 * Return: 0 on Success
 */

int main(void)
{
	/* Defined test variables */
	int lenght, breadth;
	char character;

	/* Initialized test variables */
	lenght = 3;
	breadth = 12;

	character = '%';

	/* Call a function*/
	print_pattern(character, lenght, breadth);

	return (0);

}
