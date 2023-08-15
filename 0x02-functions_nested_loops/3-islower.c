#include"main.h"

/**
 * _islower - is function that check if the argument is in lowercase
 *@c: is the argument the function accepts
 * Return: always 0
 */


int _islower(int c)
{
	if (c >= 'a' &&  c <= 'z')
		return (1);
	else
		return (0);
}
