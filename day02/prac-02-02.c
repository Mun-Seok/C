#include <stdio.h>

int main(void) {
	printf("%d\n", sizeof(int)); //4
	printf("%d\n", sizeof(char)); //1
	printf("%d\n", sizeof(short)); //2
	printf("%d\n", sizeof(50)); //4
	printf("%d\n", sizeof(float)); //4
	printf("%d\n", sizeof(3.14)); //8
	return 0;
}