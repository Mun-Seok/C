#include <stdio.h>
//#include <conio.h>//scanf를 다르게 쓰는법


int main(void) {
	//scanf를 다르게 쓰는법
	//char char1, char2, char3;
	//char1 = getchar();
	//putchar(char1);
	//getchar();
	//char2 = getchar();
	//putchar(char1);
	//getchar();
	//char3 = getchar();
	//putchar(char1);
	char str[20];
	gets(str);
	puts(str);//다 받을수 잇음

	scanf("%s", str);
	printf(str);//띄워쓰기 안받아짐

	return 0;
}