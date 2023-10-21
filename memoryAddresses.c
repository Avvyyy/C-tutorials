#include <stdio.h>

int main() {

	// memory = an array of byted within RAM (street)
	// memory block = a single unit (byte) within memory, used to hold some value (person)
	// memory address = the address of where a memory block is located (house address)

	char a = 'X';
	int b = 10;
	double c = 12.009;

	printf("%ld byte\n", sizeof(a));
	printf("%ld byte\n", sizeof(&a));
	printf("%p\n", &a);
	
	printf("%ld byte\n", sizeof(b));
	printf("%ld byte\n", sizeof(&b));
	printf("%p\n", &b);

	printf("%ld byte\n", sizeof(c));
	printf("%ld byte\n", sizeof(&c));
	printf("%p\n", &c);


}