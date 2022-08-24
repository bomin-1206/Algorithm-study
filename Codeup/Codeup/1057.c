#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	if ((a == 1 || a == 0) && (b == 1 || b == 0)) {
		if (a == b)
			printf("1");
		else
			printf("0");
	}
	else
		printf("값을 다시 입력해주세요.");
	return 0;
}