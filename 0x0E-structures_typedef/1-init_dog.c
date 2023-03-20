#include "dog.h"
/**
 * init_dog - initialize a variable of type struct dog
 * struct dog - structure for printing dog details
 * @name: name of the dog
 * @age: Age of the dog
 * @owner: Dog owner namei
 * @d: pointer to the struct dog
 * Return: NULL
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;       
}
