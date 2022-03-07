#include "dog.h"
#include <stdio.h>

/**
 * print_dog - Prints variables of a struct dog
 * @d: Struct dog to print
 */
void	print_dog(struct dog *d)
{
	if (!d)
		return;
	printf("Name: %s\n", d->name ? d->name : "(nil)");
	if (d->age)
		printf("Age: %f\n", d->age);
	else
		printf("Age: (nil)\n");
	printf("Name: %s\n", d->owner ? d->owner : "(nil)");
}
