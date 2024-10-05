#include <stdio.h>


/**
 * main - Entry point
 * Return: Always 0 (Success)
 * Description: Print Hello, World! to the standard output
 *
 * Size of a char: 1 byte(s)
 * Size of an int: 4 byte(s)
 * Size of a long int: 8 byte(s)
 * Size of a long long int: 8 byte(s)
 * Size of a float: 4 byte(s)
 * Size of a double: 8 byte(s)
 * Size of a long double: 16 byte(s)
 * Size of a short int: 2 byte(s)
 * Size of an unsigned int: 4 byte(s)
 * Size of an unsigned long int: 8 byte(s)
 * Size of an unsigned long long int: 8 byte(s)
 * Size of an unsigned short int: 2 byte(s)
 * Size of an unsigned char: 1 byte(s)
 * Size of an int*: 8 byte(s)
 * Size of a char*: 8 byte(s)
 * Size of a float*: 8 byte(s)
 * Size of a double*: 8 byte(s)
 *
 * Note: The size of a pointer is 8 bytes on a 64-bit machine.
 *		The size of a pointer is 4 bytes on a 32-bit machine.
 *		The size of a pointer is the same as the size of an int
 *	on a 32-bit machine.
 *		The size of a pointer is the same as the size of a long
 *	int on a 64-bit machine.
 *		Unsigned and signed data types have the same size.
 *		Unsigned data types hold only positive values.
 *		Signed data types hold both positive and negative values.
 */


int main(void)
{
	int i;
	int l;
	int m;
	int n;
	int o;
	int q;
	int u;
	int w;
	int x;
	int y;
	int z;

	i = sizeof(int);
	l = sizeof(float);
	m = sizeof(double);
	n = sizeof(long double);
	o = sizeof(char);
	q = sizeof(unsigned int);
	u = sizeof(unsigned char);
	w = sizeof(int *);
	x = sizeof(char *);
	y = sizeof(float *);
	z = sizeof(double *);

	printf("Size of a char: %d byte(s)\n", o);
	printf("Size of an int: %d byte(s)\n", i);
	printf("Size of a float: %d byte(s)\n", l);
	printf("Size of a double: %d byte(s)\n", m);
	printf("Size of a long double: %d byte(s)\n", n);
	printf("Size of an unsigned int: %d byte(s)\n", q);
	printf("Size of an unsigned char: %d byte(s)\n", u);
	printf("Size of an int*: %d byte(s)\n", w);
	printf("Size of a char*: %d byte(s)\n", x);
	printf("Size of a float*: %d byte(s)\n", y);
	printf("Size of a double*: %d byte(s)\n", z);

	return (0);

}

