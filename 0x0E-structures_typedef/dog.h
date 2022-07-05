#ifndef HEADER
#define HEADER

/**
 * struct dog - dog attributes
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner:the owner of the dog
 *
 * description: the info of the dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
 * dog_t - type of the dog stract
 */
typedef stract dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
