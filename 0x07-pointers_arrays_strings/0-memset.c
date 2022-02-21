#include <stdio.h>
char *_memset(char *s, char b, unsigned int n)
{
	long	*lptr;
	char	*ptr;
	long	lb;
	unsigned int	size;

	lb = 0x0;
	lptr = (long*)s;
	size = sizeof(long);
	while (size--)
		lb = (lb << 8) + (b & 0xff);
	size = sizeof(long);
	while (n >= size)
	{
		*lptr++ = lb;
		n -= size;
	}
	ptr = (char*)lptr;
	while (n--)
		*ptr++ = b;
	return (s);
}
