#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
 * print_dog - prints a struct dog
 * @d: pointer to struct dog
 * struct dog - structure with dog details
 * Return: d is NULL, print (nil)
 * name is NULL, print Name: (nil)
 * d is NULL print nothing
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", (d->name != NULL) ? d->name : "(nil)");
		printf("Age: %f\n", (d->age != 0) ? d->age : 0);
		printf("Owner: %s\n", (d->owner != NULL) ? d->owner : "(nil)");
	}
}
