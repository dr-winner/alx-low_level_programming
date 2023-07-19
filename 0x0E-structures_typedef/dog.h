#ifndef DOG_H
#define DOG_H

/**
 * struct dog - the dog's information
 * @name: premier member
 * @age: Secondly member
 * @owner: owner
 *
 * Description: description
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - typedef for struct dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif
