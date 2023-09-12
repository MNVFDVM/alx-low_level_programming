#include <stdlib.h>
#include "dog.h"
/**
 * _strlen - function that gets length of string
 *
 * @str: string to get length
 *
 * Return: length of str
 */
int _strlen(const char *str)
{
	int l = 0;

	while (*str++)
		l++;
	return (l);
}
/**
 * _strcopy - a function that returns
 *
 * @src: string to copy
 * @dest: copy string to here
 *
 * Return: @dest
 */
char *_strcopy(char *dest, char *src)
{
	int j;

	for (j = 0; src[j]; j++)
		dest[j] = src[j];
	dest[j] = '\0';
	return (dest);
}
/**
 * new_dog - a function that creates a new dog
 *
 * @name: name of the dog
 * @age: age of the dog
 * @owner: dog owner
 *
 * Return: struct pointer dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	if (!name || age < 0 || !owner)
		return (NULL);
	dog = (dog_t *) malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if ((*dog).name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if ((*dog).owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	dog->name = _strcopy(dog->name, name);
	dog->age = age;
	dog->owner = _strcopydog->owner, owner);
	return (dog);
}
