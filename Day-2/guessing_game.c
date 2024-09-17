#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "header.h"

/**
 * main - Entry point
 * Description: a simple guessing game
 * Return: Always 0 (Success)
 */

int main(void)
{
	int number, attempts, predict;
	char *greetings, *rule1, *rule2, *rule3, *rule4;

	srand(time(NULL));
	greetings = "Hello, Alkebulan!\nWelcome to the Game of Life!\n\n";
	rule1 = "\t1. You have three lives.\n";
	rule2 = "\t2. You have to guess a number between 0 and 5.\n";
	rule3 = "\t3. If you guess the number correctly, you live.\n";
	rule4 = "\t4. If you guess the number incorrectly, you lose a life.\n";
	number = rand() % 5;
	attempts = 3;

	_printchar(greetings);
	_printchar(rule1);
	_printchar(rule2);
	_printchar(rule3);
	_printchar(rule4);
	_printchar("Enter a number: ");

	while (attempts)
	{
		scanf("%d", &predict);
		if (predict == number)
		{
			_printchar("You live!\n");
			break;
		}
		else if (predict != number && attempts != 1)
		{
			_printchar("You just lost a live!\nTry again: ");
			attempts--;
		}
		else
		{
			_printchar("You are dead!\nGame over!\n");
			break;
		}
	}

	return (0);
}
