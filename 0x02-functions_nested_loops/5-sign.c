#include"main.h"

/**
 * print_sign - function that show if n is negative or posetive
 *
 * @n: is the argumetn the function accept
 * Return: always 0,1,-1
 */

int print_sign(int n)
{
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('+');
		return (1);
	}
}
