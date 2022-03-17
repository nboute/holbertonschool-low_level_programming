#include <stdio.h>

void lelievre(void) __attribute__ ((constructor));

/**
 * lelievre - Function called before main that prints a sentence
 */
void	lelievre(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon");
	printf(" my back!\n");
}
