#ifndef DOG
#define DOG

/* Standard Libraries*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct dog - Data of a dog.
 * @name: First member
 * @age: Second member
 * @owner: Third member
 *
 * Description: Composition of the structure.
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

/* Prototypes */

int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* DOG */
