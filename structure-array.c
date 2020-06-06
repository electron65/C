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

	printf("array structure Test\n");
	struct example1 a1[2]; //structure array

	//array[0]
	a1[0].number = 98;
	a1[0].character = 'c';
	for (int i = 0; i < 2; i++)
		a1[0].array[i] = '+';

	//printing structure array[0]
	printf("\nprint a1[0]\n");
	printf("a1[0].number = %d\n", a1[0].number);
	printf("a1[0].number = %c\n", a1[0].character);
	for(int i = 0; i < 2; i++)
		printf("a1[0].number = %c\n", a1[0].array[i]);

	//array[1]
	a1[1].number = 97;
	a1[1].character = 'C';
	for (int i = 0; i < 2; i++)
		a1[1].array[i] = 'P';

	//printing structure array[1]
	printf("\nprint a1[1]\n");
	printf("a1[1].number = %d\n", a1[1].number);
	printf("a1[1].number = %c\n", a1[1].character);
	for (int i = 0; i < 2; i++)
		printf("a1[1].number = %c\n", a1[1].array[i]);

	return 0;
}
