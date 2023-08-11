#include<stdio.h>

/**
 * main - is main function
 *
 * Return: always o
 */
int main(void)
{
	char i;

	for (i = 'z' ; i >= 'a' ; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
