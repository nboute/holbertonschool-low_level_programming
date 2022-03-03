#include <stdlib.h>

/**
 * _memcpy - copies n bytes from a buffer to another
 * @dest: destination buffer
 * @src: source buffer
 * @n: number of bytes to copy
 * Return: Destination buffer @dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	long	*ldest, *lsrc;
	char	*ptr;
	unsigned int	size;

	ldest = (long *)dest;
	lsrc = (long *)src;
	size = sizeof(long);
	while (n >= size)
	{
		*ldest++ = *lsrc++;
		n -= size;
	}
	ptr = (char *)ldest;
	src = (char *)lsrc;
	while (n--)
		*ptr++ = *src++;
	return (dest);
}

/**
 * _realloc - reallocates a buffer with a different size
 * @ptr: Old buffer
 * @old_size: Size of old buffer
 * @new_size: Size of new buffer
 * Return: New buffer or NULL if error
 */

void	*_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void	*reptr;
	unsigned int	size;

	if (!ptr)
		return (malloc(new_size));
	else if (ptr && !new_size)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
		return (ptr);
	if (new_size)
		reptr = malloc(new_size);
	if (!reptr)
		return (NULL);
	size = new_size > old_size ? old_size : new_size;
	if (ptr && new_size)
		_memcpy(reptr, ptr, size);
	if (ptr)
		free(ptr);
	return (reptr);
}
