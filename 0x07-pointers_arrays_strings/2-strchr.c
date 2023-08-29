#include"main.h"
/**
 * _strchr - is the function
 * @s: is the inpit argumen
 * @c: is the input argument
 * Return: 0 always
 */


char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);
	return (NULL);
}
