#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;
	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	int m = abs(n) % 10;
	if (m > 5)
		printf("%d and is greater than 5", m);
	else if (m == 0)
		printf("%d is 0", m);
	else if (m > 5 && m != 0)
		 printf("%d is less than 6 and not 0", m);
	printf("\n")
	return (0);
}
