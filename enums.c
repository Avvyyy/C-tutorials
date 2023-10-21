#include <stdio.h>

enum Day{Sun = 1, Mon = 2, Tue = 3, Wed = 4, Thurs = 5, Fri = 6, Sat = 7};

int main()
{
	// enum = a user defined type of named integer identifiers
	// 				helps to make a program more readable
	// 				short for enumerations
	// 				they can be declared within or outside the main function

	enum Day today = Sun;

	if( today == Sun || today == Sat){
		printf("It's the weekend, partytime!\n");
	}
	else{
		printf("I've got to work!\n");
	}

	



	return 0;
}