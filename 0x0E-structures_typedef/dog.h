#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Information about a dog
 * @name: dog's name
 * @age: dog's age
 * @c: dog's owner's name;
 */

struct dog
{
	char	*name;
	float	age;
	char	*owner;
};

void	init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* DOG_H */
