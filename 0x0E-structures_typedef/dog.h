#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a structure type with elements defined
 * @name: pointer to element that hold dog's name
 * @age: element that holds age
 * @owner: pointer to element that holds owner's name
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* DOG_H */
