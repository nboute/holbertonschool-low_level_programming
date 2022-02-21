#include <time.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints random string with checksum = 2772
 *
 * Return: always 0
 */

int	main(void)
{
	int		cur, val;

	srand(time(0x0));
	cur = 0;
	while (cur != 2772)
	{
		val = rand();
		val = val % 126 + 1;
		if (cur + val > 2772)
			val = 2772 - cur;
		printf("%c", val);
		cur += val;
	}
	return (0);
}
