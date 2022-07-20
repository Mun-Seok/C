#include <stdio.h>

int main(void) {
	float a = 3.1234567;
	printf("%15f\n",a);
	printf("%-15f\n", a);
	printf("%15.4f\n", a);
	printf("%-15.1f\n", a);

	return 0;
}