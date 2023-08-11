#include<stdio.h>

/**
 * main - is the main function
 *
 * Return: always 0
 */
int main(void)
{
	char lowercase;

	for (lowercase = 'a'; lowercase <= 'z'; lowercase++)	
		
		if (lowercase != 'q' || lowercase != 'e')
			putchar(lowercase);


}
