#include"main.h"

/**
 * print_line - is function
 *@n: is input argument
 * Return: always 0
 */

void print_line(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		int i;

		for (i = 0 ; i <= n ; i++)
			_putchar('_');
		_putchar('\n');
	}
}
