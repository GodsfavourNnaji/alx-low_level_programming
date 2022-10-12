#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a god's basic info
 * @name: First member with type char
 * @age: Second member with type float
 * @owner: Third member with type char
 *
 * Decription: Longer Descriptio
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
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif
