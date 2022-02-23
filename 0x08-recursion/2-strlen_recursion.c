/**
 * _str_recursion - Counts string length recursively
 * @s: string
 * Return: Length of @s
 */

int	_str_recursion(char *s)
{
	if (!*s)
		return (0);
	return (1 + _str_recursion(s + 1));
}
