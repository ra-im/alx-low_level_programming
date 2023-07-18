#ifndef DOG_H
#define  DOG_H

/**
 * struct dog - structure variable type with dog info.
 *
 * @name: dog's name.
 * @age: dog's age.
 * @owner: dog owner.
 *
 * Description: Creates a structure of dog properties.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - new nane for struct dog
 */

/* naming the structure type using typedef */
typedef struct dog dog_t;

/* defining the prototype functions */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif
