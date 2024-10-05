#include <stdio.h>
#include <string.h>
#include <stdlib.h>


/**
 * reverse_sentence - Reverses a sentence
 * @sentences: The sentence to reverse
 * Return: The reversed sentence
 */
char *reverse_sentence(char sentences[])
{
	/*Array to store the words*/
	char *words[100];
	/*Pointer to the current word*/
	char *text;
	/*Index and count variables*/
	int i, count;
	/*Pointer to the reversed sentence*/
	char *reversed_sentence = malloc(strlen(sentences) + 1);

	i = 0;
	count = 0;
	/*Tokenize the sentence*/
	text = strtok(sentences, " ");

	/*Store the words in the array*/
	while (text != NULL)
	{
		/*Add the address of the word to the array*/
		words[count++] = text;
		/*Get the next word*/
		text = strtok(NULL, " ");
	}

	/*Reverse the sentence*/
	for (i = count - 1; i >= 0; i--)
	{
		/*Add the word to the reversed sentence*/
		strcat(reversed_sentence, words[i]);
		if (i != 0)
			/*Add a space between words*/
			strcat(reversed_sentence, " ");
	}

	return (reversed_sentence);
}


/**
 * main - Prompts the user for a sentence and reverses it
 * Return: Always 0.
 */
int main(void)
{
	char sentences[100];

	printf("Enter the sentence: ");
	scanf("%[^\n]", sentences);
	printf("Reversed sentence: %s\n", reverse_sentence(sentences));

	return (0);
}
