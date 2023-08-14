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
	int p;


	for (n = 0 ; n < 10 ; n++)
	{
		for (m = n + 1 ; m < 9 ; m++)
		{
			for (p = m + 1 ; p <= 9 ; p++)
			{
				if ((n != m) != p)
				{
					putchar(n);
					putchar(m);
					putchar(p);
					if (n == '7' && m == '*')
						continue;
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
