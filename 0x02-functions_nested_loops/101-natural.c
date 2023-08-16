#include<stdio.h>
/**
 * main - is the main funtion
 *
 * Return: return 0
 */

int main(void)
{
	int sum;
	int i;

	for (i = 0 ; i < 10 ; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum = sum + i;
		}
	}
	printf("%d\n", sum);
}
