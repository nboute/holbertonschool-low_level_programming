/**
 * _strlen_recursion - Counts string length recursively
 * @s: string
 * Return: Length of @s
 */

int	_strlen_recursion(char *s)
{
	if (!*s)
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
