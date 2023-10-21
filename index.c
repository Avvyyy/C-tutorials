#include <stdio.h>
#include <stdbool.h>

int main() {
//	We are just testing out the basics
	printf("hello\n world\n I\t2\t\n");
	

	
	//Declaring variables in c
	//Declaration by declaration
	int x;
	//Initializing the variable
	x = 10;

	int age = 21;
	float gpa = 2.05; //Floating point data
	
	char grade = 'C'; //Char stores a single character
	//Writing strings
	char name[] = "Bro!"; //Array of charcacters
	
	printf("You are %d years old\n", age);
	printf("Your average grade is %c\n", grade);
	printf("Your gpa is is %f\n", gpa);

	
	//data types
	//doubles - have double the precision of a float
	
	float piF = 4.123736763873887976; // 4 bytes (32 bits precision) 6-7 digits
	double piD = 4.1237367638738709709; //8 bytes (64 bits of precision) 15-16 digits
	
	printf("My float is %f\n", piF);
	printf("My double is %lf\n", piD); //lf is used for a double
	
	bool e = true; //1 byte %d
	printf("%d", e);
	
	char f = -128; //(-128 to 127)
	printf("%c\n", f);
	
	const float PI = 3.142; //value cannot be changed in code flow
	
	int a = 5;
	int y = 2;
	
	float z = a / (float) y;
	printf("%f", z);
	return 0;
}

