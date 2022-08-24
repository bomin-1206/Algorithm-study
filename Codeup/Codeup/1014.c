#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	char x, y;
	scanf("%c %c", &x, &y);
	printf("%c %c", y, x); //순서 바꿔 출력하기
	return 0;
}