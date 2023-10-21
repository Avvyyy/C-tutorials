#include <stdio.h>
#include <string.h>

// typedef = reserved keyword that gives an existing datatype a "nickname"

// typedef char user[25];

typedef struct
{
	char name[25];
	char password[12];
	int id;
} User;

int main()
{

	// user user1 = "Bro";

	// typedef eliminated the use of the struct keyword when initializing the struct

	User user1 = {"Bro", "password1234", 123344};
	User user2 = {"Bruh", "password124", 1233994};
	
	printf("%s\n", user1.name);
	printf("%s\n", user2.password);

	return 0;
}