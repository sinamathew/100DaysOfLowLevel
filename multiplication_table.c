#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <stddef.h>

/* Function prototypes */

void multiply_table(int input);
int is_valid_int(char input[]);
int get_input(void);
void listen(void);

/**
 * get_input - Get user input
 * Description: Get user input and check if it is an integer
 * Return: Integer input
 */
int get_input(void)
{
	/* Define a variable to save input */
	char input[10];

	/* Ask for user input*/
	printf("Enter a number to multiply or type 'exit'/'quit' to stop: ");
	scanf("%s", input);

	/* Check if input is an integer or command*/
	if (strcmp(input, "exit") == 0 || strcmp(input, "quit") == 0)
		return (-1);
	else if (is_valid_int(input) == -2)
		return (-2);
	else
		return (atoi(input));
}

/**
 * is_valid_int - Check if input is an integer
 * @input: User input
 * Description: Check if input is an integer
 * Return: 0 if input is an integer, -2 if not
 */
int is_valid_int(char input[])
{
	/* Define a variable to check if input is an integer */
	size_t i;

	/* For loop to check each char */
	for (i = 0; i < strlen(input); i++)
		if (!isdigit(input[i]))
			return (-2);

	return (0);
}

/**
 * multiply_table - Print multiplication table
 * @input: Integer to multiply
 * Description: Print the multiplication table of the input
 */
void multiply_table(int input)
{
	/* Define i for table multiplier*/
	int i;
	/* Loop through 1 to 12 */
	for (i = 1; i <= 12; i++)
		printf("%d x %d = %d\n", input, i, input * i);
}

/**
 * listen - Listen for user input
 * Description: Listen for user input and process it
 */
void listen(void)
{
	/* Loop */
	while (1)
	{
		/*Define integer to check if input is valid*/
		int input;

		input = get_input();

		/* Preprocess the input */
		if (input == -1)
		{
			printf("Exiting...\n");
			break;
		}
		else if (input == -2)
		{
			printf("Please enter a valid integer.\n");
			continue;
		}
		else if (input < 2)
		{
			printf("%d cannot have a multiplication table.\n", input);
			continue;
		}
		else
		{
			multiply_table(input);
		}
	}
}

/**
 * main - Entry point
 * Description: Entry point of the program
 * Return: 0
 */
int main(void)
{
	listen();
	return (0);
}
