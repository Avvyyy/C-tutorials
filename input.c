#include <stdio.h>
#include <string.h>

int main() {
	int age;
	char name[25];
	
	printf("What is your name?\n");
	//scanf does not allow white spaces however, therefore,
	//using fgets works
	//	scanf("%s", &name);
	fgets(name, 30, stdin); //This means that store the input from stdin into the name variable and input should be 25 bytes
	name[strlen(name)-1] = '\0';
	/*
	fgets automatically adds a newline character at the end of inputs
	and to eliminate it:
	1. include the <strings.h>
	2. 	name[strlen(name)-1] = '\0'; 
	*/
	
	printf("How old are you?\n");
	//scanf is used to accept input from the user
	scanf("%d", &age);
	
	printf("Hello, %s\n", name);
	printf("You are %d years old", age);
	

	
	
	return 0;
}
