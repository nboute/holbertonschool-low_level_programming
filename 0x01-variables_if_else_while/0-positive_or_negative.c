#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - function tells if random number is positive or negative
 * Return: returns 0
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("%d", n);
	if (!n)
		puts(" is zero");
	else if (n > 0)
		puts(" is positive");
	else
		puts(" is negative");
	return (0);
}
