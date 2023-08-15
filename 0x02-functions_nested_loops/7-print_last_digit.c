#include"main.h"
/**
 * print_last_digit - function that print the last digit
 * @a: argument if the function
 * Return: returns the kast digit of a
 */

int print_last_digit(int a)
{
	int b;

	b = a % 10;
	if (b < 0)
		b = -b;
	_putchar(b + 'o');
	return (b);
}
