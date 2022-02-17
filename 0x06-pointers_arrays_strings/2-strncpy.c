/**
 * _strncpy - copies from one string to another, up to n characters
 * @dest: string to copy to
 * @src: string to copy from
 * @n: number of characters to copy;
 * Return: str
 */
char	*_strncpy(char *dest, char *src, int n)
{
	char	*str;

	str = dest;
	while (*src && n)
	{
		*dest++ = *src++;
		n--;
	}
	while (n--)
		*dest++ = '\0';
	return (str);
}
