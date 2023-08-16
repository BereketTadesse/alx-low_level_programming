#include"main.h"
#include<stdio.h>
/**
 * print_times_table - is the function
 *
 * @n: is the argumen
 * Return: o
 */
void print_times_table(int n)
{
	int i, j, result;

	for (i = 0 ; i <= n ; i++)
	{
		for (j = 0 ; j <= n ; j++)
		{
			result = i * j;
			printf("%2d", result);
			if (j != n)
				printf(", ");
		}
		printf("\n");
	}
}
