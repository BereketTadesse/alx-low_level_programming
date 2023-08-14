#include<stdio.h>

/*
 * main - is the main function
 *
 * Return: returns 0
 */

int main(void) /* main - is the main function*/
{
	int n;
	int m;

	for (n = 0 ; n < 10 ; n++)
	{
		for (m = n + 1 ; m < 9 ; m++)
		{
			if (n != m)
			{
				putchar(n);
				putchar(m);
				if (n == '8' && m == '9')
					break;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
