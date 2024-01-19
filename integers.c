#include <stdio.h>	// The stdio.h library contains input and output functions

int main()
{
	int a;

	printf("Enter a value for variable a");
	scanf("%i", &a);


	// Format specifiers are placeholders for variable data
	printf("a displayed as base 10 integers: %i\n", a);	// %i is for integers
	printf("a displayed as base 8 integers: %o\n", a);	// %i is for integers
	printf("a displayed as base 16 integers: %x\n", a);	// %i is for integers
	printf("a displayed as base 16 integers: %X\n", a);	// %i is for integers
	printf("a displayed as base 10 unsigned integers: %u\n", a);	// %i is for integers
	printf("the memory address of a: %p\n", &a);	// %i is for integers

	return 0;
}
