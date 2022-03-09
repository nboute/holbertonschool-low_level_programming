#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints it's own opcodes
 * @ac: Number of arguments
 * @av: Array of argument strings
 * Return: 0 if no errors
 */
int	main(int ac, char **av)
{
	unsigned char	*addr;
	int				size, i;

	if (ac != 2)
	{
		printf("Error\n");
		return (1);
	}
	size = atoi(av[1]);
	if (size < 0)
	{
		printf("Error\n");
		return (2);
	}
	addr = (char *)&main;
	for (i = 0; i < size; i++)
	{
		if (i)
			printf(" ");
		printf("%.2x", addr[i]);
	}
	printf("\n");
	return (0);
}
