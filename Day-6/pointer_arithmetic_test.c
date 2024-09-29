#include <stdio.h>

/**
 * main - Solve me
 *
 * Return: Always 0.
 */
int main(void)
{
	int a[5];
	int *p;
	int *p2;

	*a = 98;
	*(a + 1) = 198;
	*(a + 2) = 298;
	a[3] = 398;
	*(a + 4) = 498;

	printf("Value of a[0] should be 98 and it's: %d", a[0]);
	printf("\nValue of a[1] should be 198 and it's: %d", a[1]);
	printf("\nValue of a[2] should be 298 and it's: %d", a[2]);
	printf("\nValue of a[3] should be 398 and it's: %d", a[3]);
	printf("\nValue of a[4] should be 498 and it's: %d\n", a[4]);
	printf("----------------------------------------\n");

	p = a + 1;
	printf("Value of p should be 198 and it's: %d\n", *p);

	*p = 98;
	printf("Value of a[1] should be 98 and it's: %d\n", a[1]);

	p2 = a + 3;
	printf("Value of p2 should be 398 and it's: %d\n", *p2);

	*p2 = *p + 1337;
	printf("Value of a[3] should be 1435 and it's: %d\n", a[3]);

	return (0);
}
