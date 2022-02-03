#include <unistd.h>
#include <string.h>

/**
 * main - function prints string on stderr
 * str - string that contains the program's output
 * Return: return 1
*/

int	main(void)
{
	char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, str, strlen(str));
	return (1);
}
