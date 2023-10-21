#include <stdio.h>
#include <string.h>

// struct = collection of related numbers ("variables")
// 					they can be of differnet data types
// 					listed under one name in a block of memory
// 					they are very similar to classes in other 
// 					languages ( but no methods)

// This a declaration of a struct

struct Players
{
	char name[12];
	int score;
};


int main() {

	struct Players player1;
	struct Players player2;

	strcpy(player1.name, "Favour");
	player1.score = 4;

	strcpy(player2.name, "Peace");
	player2.score = 5;

	printf("%s, %d\n", player1.name, player1.score);
	printf("%s, %d\n", player2.name, player2.score);


	return 0;
}