#include <stdio.h>

int main()
{

	FILE *pF = fopen("test.txt", "a"); //pF is a pointer toa file 
																			//The second argunent provided is to decide we are writing to the file or reading it or whatever.

	fprintf(pF, "\nSpongeBOb Squareboxers"); //To write to a file


	//The code below deleted a file
	if(remove("test.txt") == 0)
	{
		printf("That file was deleted successfully");
	}
	else
	{
		{
			printf("Your file still dey");
		}
	}
	fclose(pF);


	return 0;
}