#include <stdio.h>
//#include <conio.h>//scanf�� �ٸ��� ���¹�


int main(void) {
	//scanf�� �ٸ��� ���¹�
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
	puts(str);//�� ������ ����

	scanf("%s", str);
	printf(str);//������� �ȹ޾���

	return 0;
}