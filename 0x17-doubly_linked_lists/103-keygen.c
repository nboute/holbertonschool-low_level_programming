#include <stdlib.h>
#include <stdio.h>


/**
 * main - Keygen program for crackme5 assignment
 * @ac: Number of arguments
 * @av: Arguments
 * Return: Always 0
 */
int	main(int ac, char **av)
{
	int				i, j, len;
	unsigned int	k, nb, ui;
	char			c, str[7], crypt[] =
	"A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";

	if (ac < 2)
		return (0);
	for (len = 0; av[1][len]; len++)
		;
	for (i = 0; i < 7; i++)
		str[i] = '\0';
	str[0] = crypt[(len ^ 0x3B) & 0x3F];
	for (c = 0, i = 0; i < len; ++i)
		c += av[1][i];
	str[1] = crypt[(c ^ 0x4F) & 0x3F];
	c = 1;
	for (i = 0; i < len; ++i)
		c *= av[1][i];
	c = ((unsigned char)c ^ 0x55) & 0x3F;
	str[2] = crypt[(int)c];
	for (j = av[1][0], i = 0; i < len; ++i)
		if (av[1][i] > j)
			j = av[1][i];
	srand(j ^ 0xE);
	c = rand() & 0x3F;
	str[3] = crypt[(int)c];
	for (k = 0, i = 0; i < len; ++i)
		k += av[1][i] * av[1][i];
	c = (k ^ 0xEF) & 0x3F;
	str[4] = crypt[(int)c];
	k = (unsigned int)av[1][0];
	for (nb = 0, ui = 0; k > ui; ++ui)
		nb = rand();
	c = (nb ^ 0xE5) & 0x3F;
	str[5] = crypt[(int)c];
	printf("%s", str);
	return (0);
}
