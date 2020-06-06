#include <stdio.h>

//create structure

struct example1 {
	int number;
	char character;
	char array[2];
};
// can not initialize members in structure because no members are allocated for memory
// below in the main function, we can see that we are using the structure variables but also initializing structure variables

int main() {

	printf("Simple Structure Test\n");
	struct example1 a1; //must use "struct" keyword in c, however it is not mandatory in c++
	//accessing structure variables
	//using 'a1', the variable we declared above
	a1.number = 98;
	a1.character = 'c';
	for (int i = 0; i < 2; i++)
		a1.array[i] = '+';

	//printing structure variables
	printf("a1.number = %d\n", a1.number);
	printf("a1.number = %c\n", a1.character);
	for(int i = 0; i < 2; i++)
		printf("a1.number = %c\n", a1.array[i]);

	//change variable content
	a1.number = 97;
	printf("\nChange variable content test\n");
	printf("al.number = %d", a1.number);

	return 0;
}
