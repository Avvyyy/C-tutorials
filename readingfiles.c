#include <stdio.h>

int main() {
	FILE *pF = fopen("C:/Users/uzoch/Desktop/ode to mamia.txt", "r");

	//A buffer is going to act as a conatiner to hold our text one line at a time

	char buffer[255];

	if(pF == NULL){
		printf("Unable to open file");
	}
	else{
		while(fgets(buffer, 255, pF) != NULL){
		printf("%s", buffer);
	}
	}
	
	fclose(pF);
	return 0;
}