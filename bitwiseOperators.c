#include <stdio.h>

int main() {


	// & = AND
	// | = OR
	// ^ = XOR
	// << = left shift
	// >> = right shift

	int x = 6; // 6 = 00000110
	int y = 12; // 12 = 00001100
	int z = 0; 

	z = x & y;
	printf("AND = %d\n", z);

	z = x | y;
	printf("OR = %d\n", z);

	z = x ^ y; //Here, only one value is allowed to be 1
	printf("XOR = %d\n", z);

	z = x << 1; //Here one number at the leftmost side is dropped and a number is atteched to the rightmost side
							//This is a case of x * (n^2)
	printf("LeftShift = %d\n", z);

	z = x >> 1; //Here one number at the rightmost side is dropped and a number is atteched to the leftmost side
							//This is a case of x / (n^2)
	printf("RightShift = %d\n", z);


}