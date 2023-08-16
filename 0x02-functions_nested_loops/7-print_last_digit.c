#include "main.h"
/**
 * print_last_digit -  is the function
 * @i: is the input argument
 * Return: n
 */

int print_last_digit(int i)
{
	int b;

	b = i % 10;
	if (b < 0)
		b = -b;
	_putchar(b + '0');
	return (b);
}
