#include <stdio.h>

void hello(int *ptr) {
	
	printf("hello() ptr = %d\n", *ptr);
	*ptr = ((*ptr) * 2) - 100;
	printf("hello() ptr = %d\n", *ptr);
}

int main() {

	int num = 90;
	int *ptr;
	ptr = &num;

	printf("main() ptr = %d\n", *ptr);
	hello(&num);
	
	printf("num = %d", num);
	return 0;
}
