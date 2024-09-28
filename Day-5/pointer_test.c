#include <stdio.h>

/**
 * modif_my_char_var - Entry file to learn pointer
 * @cc: parameter pointer
 * @ccc: ordinary parameter
 * Description: I assume that the value of any parameter passed to `cc` will
 *	change while that of `ccc` won't, be `cc` is a pointer and holds the
 *	address of the parameter passed to it.
 */
void modif_my_char_var(char *cc, char ccc)
{
	/*Change the value at the address store in `cc`*/
	*cc = 'o';

	printf("The value of ccc given is: %c\n", ccc);
	/*Change the value of ccc*/
	ccc = 'l';

	printf("The value of ccc in function is: %c\n", ccc);
}


/**
 * main - Entry file
 * Description: Main file to test how pointers work
 * Return: Always (0) On Success
 */
int main(void)
{
	/*Declared a character and a character pointer*/
	char c;
	char *p;

	/*Assigned the address of `c` to pointer `p`*/
	p = &c;

	/*Assign value to `c`*/
	c = 'H';

	/*Prints the values before call*/
	printf("BEFORE CALL\n");
	printf("Value of c is: %c\n", c);
	printf("Value of p is: %p\n", p);

	/*Function call*/
	modif_my_char_var(p, c);

	/*Prints the values after call*/
	printf("AFTER CALL\n");
	printf("Value of c is: %c\n", c);
	printf("Value of p is: %p\n", p);

	return (0);
}
