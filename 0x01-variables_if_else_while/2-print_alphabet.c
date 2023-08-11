#include<stdio.h>

/*
 * main - main function
 *
 * Return: it returns always 0
 */

int main(void)
{
	char lowercase;

	for (lowercase = 'a'; lowercase <= 'z'; lowercase++)

		putchar(lowercase);
	printf("\n");

	return (0);
}
