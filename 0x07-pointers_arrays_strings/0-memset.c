#include"main.h"
/**
 * _memset - copies memory area
 * @b: area ti fill with byte
 * @s: is source location
 * @n: is the size
 * Return: pointer to dest
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
	{
		s[i] = b[i];
	}
	return (dest);
}
