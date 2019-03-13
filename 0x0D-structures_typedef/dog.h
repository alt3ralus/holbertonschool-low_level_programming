#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - structure that contains several members.
 * @name: pointer type.
 * @age: integer type.
 * @owner: pointer type.
 */

typedef struct dog
{
char *name;
float age;
char *owner;
}dog_t;


void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
