#include <stdio.h>


/**
 * modif_my_param - set the integer to 402
 * @m: a pointer the integer we want to set to 402
 *
 * Return: nothing
 */
void modif_my_param(int *m)
{
	printf("Value of 'm': %p\n", m);
	printf("Address of 'm': %p\n", &m);
	*m = 4022;
}



/**
 * main - Entry point
 * Return: Always 0 (Success)
 * Description: Learn pointer and array
 */

int main(void)
{
	/* Declare a character integer and integer pointer */
	char c;
	int n;
	int *p;

	/* Assign a value to the integer and integer pointer */
	n = 98;
	p = &n;

	/* Print the size of major data types */
	printf("Size of a char on my computer: %lu byte(s)\n", sizeof(char));
	printf("Size of an int on my computer: %lu byte(s)\n", sizeof(int));
	printf("Size of a float on my computer: %lu byte(s)\n", sizeof(float));
	printf("Size of a pointer on my computer: %lu byte(s)\n", sizeof(p));

	/* Get the value of variables */
	printf("\nValue of variable 'n': %d\n", n);
	printf("Value at address of pointer 'p': %d\n", *p);

	/* Get the address of variables */
	printf("\nAddress of variable 'n': %p\n", &n);
	printf("Address of variable 'c': %p\n", &c);
	printf("Address of pointer 'p': %p\n", &p);

	/* Change the value of variable 'n' using pointer */
	*p = 402;

	/* Print the new value of variable 'n' */
	printf("\nNew value of variable 'n': %d\n", n);
	printf("New value at address of pointer 'p': %d\n", *p);

	printf("\nValue of 'n' before the call: %d\n", n);
	printf("Address of 'n': %p\n", &n);
	printf("Value of 'p': %p\n", p);
	printf("Address of 'p': %p\n", &p);
	modif_my_param(p);
	printf("Value of 'n' after the call: %d\n", n);

	return (0);
}
