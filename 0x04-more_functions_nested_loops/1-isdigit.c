#include"main.h"
/**
 * _isdigit - is the function
 *
 * @c: is the input aargument
 * Return: always 0
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
