/**
 * _strncat - concatenates two strings, up to n characters from src
 * @dest: string to append to
 * @src: string to append to dest
 * @n: number of characters to append
 * Return: dest
 */

char	*_strncat(char *dest, char *src, int n)
{
	char	*str;

	str = dest;
	while (*dest)
		dest++;
	while (n-- && *src)
		*dest++ = *src++;
	if (n)
		*dest = '\0';
	return (str);
}
