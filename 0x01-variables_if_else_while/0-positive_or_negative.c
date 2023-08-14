#include <stdlib.h>
#include <time.h>
#include<stdio.h>

/*
 * main - Entry point for the program
 *
 * Return: it returns 0
 */


int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive", n);
	if (n == 0)
		printf("%d is zero", n);
	if (n < 0)
		printf("%d is negative", n);
	printf("\n");
	/* your code goes there */
	return (0);
}
