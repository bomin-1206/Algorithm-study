#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int n;
	scanf("%d", &n);
	if (n >= 1 && n <= 12) {
		switch (n) {
		case 3:
			printf("spring");
			break;
		case 4:
			printf("spring");
			break;
		case 5:
			printf("spring");
			break;
		case 6:
			printf("summer");
			break;
		case 7:
			printf("summer");
			break;
		case 8:
			printf("summer");
			break;
		case 9:
			printf("fall");
			break;
		case 10:
			printf("fall");
			break;
		case 11:
			printf("fall");
			break;
		default:
			printf("winter");
			break;
		}
	}
	return 0;
}