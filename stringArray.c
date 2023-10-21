#include <stdio.h>
#include <string.h>

int main() {

	// How an array of strings is declared
	char people[][10] = {"Favour", "Peace", "Precious"};

	// people[0] = "Tesla";
	// The above code is not going to work as teh content is a string. Do instead ->

	strcpy(people[0], "Tesla");

	for(int i = 0; i < sizeof(people)/sizeof(people[0]); i++){
		printf("%s\n", people[i]);
	}
	return 0;
}