#ifndef DOG_H
#define DOG_H
/**
 * struct dog - a dog struct
 *
 * @name: dogs name
 * @age: dogs age
 * @owner: owners name
 *
 * description: long dog struuct in abig betty world
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
