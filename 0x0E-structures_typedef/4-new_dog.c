#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - the fuction returns the length of a string
 * @s: string to consider
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	int x;

	x = 0;

	while (s[x] != '\0')
	{
		x++;
	}

	return (x);
}

/**
 * *_strcpy - function copies the string pointed to by src
 * and the terminating null byte (\0)
 * to buffer pointed to by dest
 * @dest: destination of string
 * @src: string source
 *
 * Return: pointer to the destination
 */
char *_strcpy(char *dest, char *src)
{
	int length, x;

	length = 0;

	while (src[length] != '\0')
	{
		length++;
	}

	for (x = 0; x < length; x++)
	{
		dest[x] = src[x];
	}
	dest[x] = '\0';

	return (dest);
}

/**
 * new_dog - this function creates a new dog
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 *
 * Return: pointer to new dog (Success), NULL if not
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int Firstlength, Secondlength;

	Firstlength = _strlen(name);
	Secondlength = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (Firstlength + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (Secondlength + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
