#include <stdio.h>

int main()
{
	
	int age = 21;
	int *pAge = &age; //It's considered good practice to assign NULL if declaring a pointer and not assigning values to it yet

	printf("Address of age: %p\n", &age);
	printf("Value of pAge: %p\n", pAge);
	printf("Value of age: %d\n", age);
	printf("Value of stored address: %d\n", *pAge); //We are deferencing the pointer here

	printf("Size of age: %ld\n", sizeof(age));
	printf("Size of pAge: %ld\n", sizeof(pAge));


	return 0;
}