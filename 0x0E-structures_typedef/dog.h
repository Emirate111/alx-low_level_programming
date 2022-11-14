#ifndef DOG_H
#define DOG_H

/**
 * dog_t- Typedef for struct dog
 */
typedef sturct dog dog_t;

/**
 * struct dog - struct that stores some information of a dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: onwer of the dog
 *
 * Description:struct called "dog" that stores its name, its age
 * and the name of its owwer.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void int_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t*d);

#endif
