#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the new dog, or NULL if it fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	unsigned int i;
	unsigned int len_name;
	unsigned int len_owner;

	len_name = 0;
	while (name[len_name])
		len_name++;
	len_owner = 0;
	while (owner[len_owner])
		len_owner++;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = malloc(len_name + 1);
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(len_owner + 1);
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	i = 0;
	while (name[i])
	{
		dog->name[i] = name[i];
		i++;
	}
	dog->name[i] = '\0';
	i = 0;
	while (owner[i])
	{
		dog->owner[i] = owner[i];
		i++;
	}
	dog->owner[i] = '\0';
	dog->age = age;
	return (dog);
}
