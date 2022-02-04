#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - function prints strings depending on random value
 * Return: returns 0
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d is %d", n, n % 10);
	if (!(n % 10))
		puts(" and is 0");
	else if ((n % 10) > 5)
		puts(" and is greater than 5");
	else if ((n % 10) < 6 && n)
		puts(" and is less than 6 and not 0");
	return (0);
}
