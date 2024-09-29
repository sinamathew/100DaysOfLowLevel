#include <stdio.h>

/**
 * main - illustrates pointers arithmetic
 *
 * Description: The main function illustrates how to access
 * elements of an array using pointers arithmetic.
 * The program also shows how to get the address of an element
 * of an array using pointers arithmetic.
 * The program prints the value of the first five elements of
 * an array and the address of the first element of the array.
 * The program also prints the address of the second element of
 * the array using two different methods.
 *
 * Return: Always 0.
 */
int main(void)
{
	int a[5];
	int *p;
	int n;

	*a = 98; /* same as *(a + 0) */
	*(a + 1) = 198;
	*(a + 2) = 298;
	*(a + 3) = 398;
	*(a + 4) = 498;
	printf("Value of a[0]: %d\n", *a);
	printf("Value of a[1]: %d\n", *(a + 1));
	printf("Value of a[2]: %d\n", *(a + 2));
	printf("Value of a[3]: %d\n", *(a + 3));
	printf("Value of a[4]: %d\n", *(a + 4));
	printf("----------------\n");
	printf("Value of 'a' (also address of a[0]): %p\n", a);
	printf("Address of 'a[1]': %p\n", (a + 1));
	printf("Address of 'a[1]': %p\n", &(*(a + 1)));
	printf("----------------\n");

	p = &n;
	printf("p = &n;\np: %p\n", p);
	printf("p + 1: %p\n", p + 1);
	printf("p + 2: %p\n", p + 2);
	printf("p + 10: %p\n", p + 10);
	/* possible since a is evaluated */
	/* as an int * in this context */
	p = a;
	printf("p = a;\np: %p\np + 1: %p\n", p, p + 1);

	return (0);
}
