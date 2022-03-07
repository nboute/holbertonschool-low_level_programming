#include <stdlib.h>
#include "dog.h"

/**
 * _strdup - Creates a duplicate of a given string
 * @str: String to duplicate
 * Return: Duplicate of @str
 */
char	*_strdup(char *str)
{
	size_t	len;
	char	*dup;

	if (!str)
		return (NULL);
	for (len = 0; str[len]; len++)
		;
	dup = malloc(len + 1);
	if (!dup)
		return (NULL);
	for (len = 0; str[len]; len++)
		dup[len] = str[len];
	dup[len] = '\0';
	return (dup);
}

dog_t	*new_dog(char *name, float age, char *owner)
{
	dog_t	*d;

	d = malloc(sizeof(*d));
	if (!d)
		return (NULL);
	d->name = _strdup(name);
	if (!d->name)
	{
		free(d);
		return (NULL);
	}
	d->age = age;
	d->owner = _strdup(owner);
	if (!d->owner)
	{
		free(d->name);
		free(d);
	}
	return (d);
}
