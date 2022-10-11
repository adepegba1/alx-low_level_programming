#ifndef _dog_h
#define _dog_h
/**
  *struct dog - structure of a Dog
  *
  *@name: name of Dog
  *
  *@age: age of the Dog
  *
  *@owner: the owner of the Dog
  */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif

