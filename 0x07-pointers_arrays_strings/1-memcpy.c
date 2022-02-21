char *_memcpy(char *dest, char *src, unsigned int n)
{
	long	*ldest, *lsrc;
	char	*ptr;
	unsigned int	size;

	ldest = (long*)dest;
	lsrc = (long*)src;
	size = sizeof(long);
	while (n >= size)
	{
		*ldest++ = *lsrc++;
		n -= size;
	}
	ptr = (char*)ldest;
	src = (char*)lsrc;
	while (n--)
		*ptr++ = *src++;
	return (dest);
}
