#include "dog.h"
#include <stdio.h>

void	print_dog(struct dog *d)
{
	if (!d)
		return ;
	printf("Name: %s\n", d->name ? d->name : "(nil)");
	printf("Age: %f\n", d->age);
	printf("Name: %s\n", d->owner ? d->owner : "(nil)");
}
